# Created by: Kevin Lo <kevlo@FreeBSD.org>
# $FreeBSD: head/www/phpmp/Makefile 458818 2018-01-12 11:21:07Z rene $

PORTNAME=	phpmp
PORTVERSION=	0.12.0
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://www.bayofrum.net/dist/${PORTNAME}/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Web interface for music player daemon

LICENSE=	GPLv2

NO_BUILD=	yes
USES=		php
USE_PHP=	pcre sockets

PHPMP?=		${WWWDIR_REL}
PLIST_SUB=	PHPMP="${PHPMP}" WWWOWN="${WWWOWN}" WWWGRP="${WWWGRP}"

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${PHPMP}
	@${CP} -R ${WRKSRC}/ ${STAGEDIR}${PREFIX}/${PHPMP}
	@${CHMOD} -R 755 ${STAGEDIR}${PREFIX}/${PHPMP}

.include <bsd.port.mk>
