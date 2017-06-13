# Created by: Bartlomiej Rutkowski <r@robakdesign.com>
# $FreeBSD: head/www/hastymail/Makefile 422175 2016-09-15 01:41:28Z swills $

PORTNAME=	hastymail
PORTVERSION=	1.5
PORTREVISION=	3
CATEGORIES=	www
MASTER_SITES=	SF/${PORTNAME}/OldFiles

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Small, fast and secure yet powerful IMAP webmail

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

NO_BUILD=	yes
SUB_FILES=	pkg-message

WANT_PHP_WEB=	yes
USE_PHP=	session imap pcre

PLIST_SUB=	WWWOWN="${WWWOWN}" WWWGRP="${WWWGRP}"

# Don't install automatically CVS directories, patched files and the default config file.
FIND_SKIP_OPTS=	-not -name hastymail.conf-example -not -name '*.orig' \
		-not -name '*.bak' -not -path '*/CVS/*' -not -name CVS

post-patch:
	@${REINPLACE_CMD} -e "s,%%PREFIX%%,${PREFIX}," \
		${WRKSRC}/lib/constant.php

do-install:
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	cd ${WRKSRC} && ${FIND} . ${FIND_SKIP_OPTS} | \
		${PAX} -rwd ${STAGEDIR}${WWWDIR}
	${INSTALL_DATA} ${WRKSRC}/hastymail.conf-example \
		${STAGEDIR}${PREFIX}/etc/hastymail.conf.sample

.include <bsd.port.mk>
