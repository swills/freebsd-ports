# Created by: Hye-Shik Chang <perky@fallin.lv>
# $FreeBSD: head/astro/py-pymetar/Makefile 491002 2019-01-23 00:01:07Z sunpoet $

PORTNAME=	pymetar
PORTVERSION=	1.1
CATEGORIES=	astro python geography
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Python module that provides access to NOAA METAR weather reports

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		python:3.5+ shebangfix
USE_PYTHON=	autoplist distutils

NO_ARCH=	yes

SHEBANG_FILES=	bin/pymetar

.include <bsd.port.mk>
