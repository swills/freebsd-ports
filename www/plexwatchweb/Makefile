# Created by: Richard Gallamore <ultima@FreeBSD.org>
# $FreeBSD: head/www/plexwatchweb/Makefile 451218 2017-10-04 11:29:14Z bapt $

PORTNAME=	plexWatchWeb
PORTVERSION=	1.5.4.2
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	www

MAINTAINER=	ultima@FreeBSD.org
COMMENT=	Web front-end for plexWatch

RUN_DEPENDS=	plexWatch>=0.1.6:multimedia/plexwatch

USES=		php
USE_PHP=	curl json session simplexml sqlite3

USERS=		${WWWOWN}
GROUPS=		${WWWGRP}

USE_GITHUB=	yes
GH_ACCOUNT=	ecleese
GH_TAGNAME=	0d05556
NO_BUILD=	yes

do-install:
	${MKDIR} ${STAGEDIR}${WWWDIR}/config
	${RM} -r ${WRKSRC}/config
	(cd ${WRKSRC} && ${COPYTREE_SHARE} \*  ${STAGEDIR}${WWWDIR}/)

.include <bsd.port.mk>
