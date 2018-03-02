#!/bin/sh

PORT_LIST=$(mktemp)

git diff --no-prefix --name-only origin/trunk ${CI_COMMIT_SHA} | grep Makefile | cut -d/ -f 1,2 | sort -u | sed -e 's/$/@all/' > ${PORT_LIST}

cat <<EOF >> ${PORT_LIST}
databases/postgresql96-client@all
databases/postgresql96-contrib@all
databases/postgresql96-server@all
devel/git@all
devel/gitlab-shell@all
devel/rubygem-capybara@all
devel/rubygem-capybara-screenshot@all
devel/rubygem-pry-byebug@all
devel/rubygem-rspec@all
editors/vim-console@all
emulators/virtualbox-ose-additions-nox11@all
lang/python@all
mail/dma@all
net/rsync@all
security/ca_root_nss@all
security/sudo@all
sysutils/firstboot-freebsd-update@all
sysutils/firstboot-pkgs@all
www/chromium@all
www/gitlab@all
www/nginx@all
www/rubygem-selenium-webdriver@all
sysutils/docker@all
sysutils/docker-machine@all
devel/rubygem-airborne@all
EOF

sudo nice -n 18 /usr/sbin/idprio 29 poudriere bulk -t -B ${CI_JOB_ID} -j 111-amd64 -p ${CI_PROJECT_NAMESPACE}-${CI_PROJECT_NAME} -f ${PORT_LIST}
