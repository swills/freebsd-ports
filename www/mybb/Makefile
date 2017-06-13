# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/www/mybb/Makefile 441743 2017-05-25 21:24:26Z joneum $

PORTNAME=	mybb
PORTVERSION=	1.8.12
CATEGORIES=	www

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PHP-based bulletin board / discussion forum system

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_TAGNAME=	${PORTNAME}_1812

USES=		cpe mysql php
NO_BUILD=	yes
NO_ARCH=	yes
USE_PHP=	xsl mysql iconv gd xml
SUB_FILES=	pkg-message
WWWDIR?=	${PREFIX}/www/${PORTNAME}
PLIST_SUB=	WWWOWN=${WWWOWN}

do-install:
	@${MKDIR} ${STAGEDIR}${WWWDIR}
	${CP} -R ${WRKSRC}/ ${STAGEDIR}${WWWDIR}
	${TOUCH} ${STAGEDIR}${WWWDIR}/inc/config.php.sample
	${MV} ${STAGEDIR}${WWWDIR}/inc/settings.php \
		${STAGEDIR}${WWWDIR}/inc/settings.php.sample

.include <bsd.port.mk>
