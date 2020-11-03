# $FreeBSD$

PORTNAME=	bareos
DISTVERSIONPREFIX=	Release/
DISTVERSION=	19.2.8
CATEGORIES?=	www sysutils
PKGNAMESUFFIX=	-webui

MAINTAINER=	acm@FreeBSD.org
COMMENT=	PHP-Frontend to manage Bareos over the web

LICENSE=	AGPLv3+
LICENSE_FILE=	${WRKSRC}/webui/LICENSE

USES=		php:build cmake gettext
USE_PHP=	openssl gettext ctype hash json session iconv
NO_BUILD=	yes
NO_ARCH=	yes
USE_GITHUB=	yes

USERS=		bareos
GROUPS=		${USERS}

CMAKE_SOURCE_PATH=	${WRKSRC}/webui
CMAKE_INSTALL_PREFIX=	${STAGEDIR}
CMAKE_ARGS+=	-DSHARE_INSTALL_PREFIX:PATH=${PREFIX}/www \
		-DCMAKE_INSTALL_FULL_SYSCONFDIR:PATH=${PREFIX}/etc \
		-Dsysconfdir=${PREFIX}/etc \
		-Dwebuiconfdir=${PREFIX}/etc/bareos
SUB_FILES=	pkg-message
PLIST_SUB+=	WWWOWN=${WWWOWN} WWWGRP=${WWWGRP}
SUB_LIST=	BAREOSWEBUIDIR=${WWWDIR}

OPTIONS_DEFINE=		MYSQL PGSQL
OPTIONS_DEFAULT=	PGSQL

MYSQL_USE=		PHP=pdo_mysql
PGSQL_USE=		PHP=pdo_pgsql

post-extract:
	${FIND} ${WRKSRC}/webui -name .gitignore -delete

post-install:
	${FIND} ${STAGEDIR} -name \*.in -delete
	${MKDIR} ${STAGEDIR}${ETCDIR}
	${INSTALL_DATA} ${WRKSRC}/webui/install/apache/bareos-webui.conf ${STAGEDIR}${ETCDIR}/apache-bareos-webui.conf
	${INSTALL_DATA} ${WRKSRC}/webui/install/nginx/bareos-webui.conf ${STAGEDIR}${ETCDIR}/nginx-bareos-webui.conf
	${INSTALL_DATA} ${WRKSRC}/webui/phpunit.xml ${STAGEDIR}${WWWDIR}
	${INSTALL_DATA} ${WRKSRC}/webui/composer.json ${STAGEDIR}${WWWDIR}
.include <bsd.port.mk>
