# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/www/mybb/Makefile 455357 2017-12-02 12:30:01Z joneum $

PORTNAME=	mybb
DISTVERSION=	1.8.14
CATEGORIES=	www

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PHP-based bulletin board / discussion forum system

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_GITHUB=	yes
GH_TAGNAME=	${PORTNAME}_1814

USES=		cpe mysql php:web
NO_BUILD=	yes
NO_ARCH=	yes
USE_PHP=	xsl mysqli iconv gd xml
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
