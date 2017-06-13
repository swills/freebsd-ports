# Created by: babak@farrokhi.net
# $FreeBSD: head/www/textpattern/Makefile 424495 2016-10-23 06:53:16Z jhale $

PORTNAME=	textpattern
PORTVERSION=	4.6.2
CATEGORIES=	www
MASTER_SITES=	http://textpattern.com/file_download/110/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Free, flexible, elegant, easy-to-use content management system

LICENSE=	GPLv2

USES=		cpe php:web
USE_PHP=	json mbstring mysql pcre xml zlib
NO_BUILD=	yes
NO_ARCH=	yes

PLIST_SUB=	WWWOWN="${WWWOWN}" \
		WWWGRP="${WWWGRP}"
SUB_FILES=	pkg-message

do-install:
	@cd ${WRKSRC}/ && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}/

.include <bsd.port.mk>
