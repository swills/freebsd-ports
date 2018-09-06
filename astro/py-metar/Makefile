# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/astro/py-metar/Makefile 478565 2018-08-31 14:41:39Z sunpoet $

PORTNAME=	metar
PORTVERSION=	1.6.0
CATEGORIES=	astro python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Parse METAR-coded weather reports

# It actually has the first clause only.
LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USE_PYTHON=	autoplist concurrent distutils
USES=		python

.include <bsd.port.mk>
