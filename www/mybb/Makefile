# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/www/mybb/Makefile 465463 2018-03-24 18:55:56Z joneum $

PORTNAME=	mybb
DISTVERSION=	1.8.15
CATEGORIES=	www

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PHP-based bulletin board / discussion forum system

LICENSE=	GPLv3

USE_GITHUB=	yes
GH_TAGNAME=	${PORTNAME}_1815

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
