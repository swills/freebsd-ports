# Created by: olevole@olevole.ru
# $FreeBSD: head/databases/phpliteadmin/Makefile 436340 2017-03-17 14:06:34Z lifanov $

PORTNAME=	phpLiteAdmin
DISTVERSION=	1-9-7-1
CATEGORIES=	databases www
MASTER_SITES=	https://bitbucket.org/phpliteadmin/public/downloads/
DISTNAME=	${PORTNAME}_v${DISTVERSION}

MAINTAINER=	olevole@olevole.ru
COMMENT=	Web-based database management tool for Sqlite

LICENSE=	GPLv3

USES=		php:web zip

NO_ARCH=	yes
NO_BUILD=	yes
USE_PHP=	pdo_sqlite session

PLIST_FILES=	${WWWDIR}/phpliteadmin.php \
		${WWWDIR}/phpliteadmin.config.sample.php

SUB_FILES=	pkg-message

do-install:
	@${MKDIR} ${STAGEDIR}/${WWWDIR}
	${INSTALL_DATA} ${WRKDIR}/phpliteadmin.php \
		${STAGEDIR}${WWWDIR}
	${INSTALL_DATA} ${WRKDIR}/phpliteadmin.config.sample.php \
		${STAGEDIR}${WWWDIR}

.include <bsd.port.mk>
