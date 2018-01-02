# Created by: Kevin Lo <kevlo@FreeBSD.org>
# $FreeBSD: head/www/jinzora/Makefile 456517 2017-12-16 21:44:09Z tz $

PORTNAME=	jinzora
PORTVERSION=	3.0
PORTREVISION=	1
CATEGORIES=	www multimedia
MASTER_SITES=	SF/${PORTNAME}/Jinzora%20${PORTVERSION}

MAINTAINER=	kevlo@FreeBSD.org
COMMENT=	Web based media streaming and management system

IGNORE_WITH_PHP=	70 71 72

USES=		php
USE_PHP=	mysql session iconv gd pdf

NO_BUILD=	yes
SUB_FILES=      pkg-message

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}
	@cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${WWWDIR}
	@if [ ! -f ${STAGEDIR}${WWWDIR}/settings.php ]; then \
	${TOUCH} ${STAGEDIR}${WWWDIR}/settings.php ; fi
	${CHMOD} 755 ${STAGEDIR}${WWWDIR}/jukebox/settings.php
	${CHMOD} -R 755 ${STAGEDIR}${WWWDIR}/temp
	${CHMOD} -R 755 ${STAGEDIR}${WWWDIR}/data

.include <bsd.port.mk>
