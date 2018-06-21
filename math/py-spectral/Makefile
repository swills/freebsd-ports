# $FreeBSD: head/math/py-spectral/Makefile 472948 2018-06-21 02:59:06Z yuri $

PORTNAME=	spectral
DISTVERSION=	0.19
CATEGORIES=	math
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Spectral Python (SPy) is a Python module for hyperspectral image processing

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYNUMPY}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
