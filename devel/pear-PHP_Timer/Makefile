# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-PHP_Timer/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	PHP_Timer
PORTVERSION=	2.0.0
CATEGORIES=	devel pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Utility class for timing

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=	pear:env
USE_GITHUB=	yes
GH_ACCOUNT=	sebastianbergmann
GH_PROJECT=	php-timer

NO_ARCH=	yes

NO_BUILD=	yes

PLIST_FILES=	${DATADIR}/Timer.php

do-install:
	${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/src/Timer.php ${STAGEDIR}${DATADIR}

.include <bsd.port.mk>
