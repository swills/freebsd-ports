# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/astro/py-RO/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	RO
PORTVERSION=	3.6.9
PORTREVISION=	2
CATEGORIES=	astro python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Package of Python astronomical utilities

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/numpy/core/numeric.py:math/py-numpy@${FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

OPTIONS_DEFINE=		ASTROPY MATPLOTLIB PYGAME
OPTIONS_DEFAULT=	ASTROPY

ASTROPY_DESC=		Add Support for Astropy
MATPLOTLIB_DESC=	Add support for Matplotlib
PYGAME_DESC=		Add Support for PyGame

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

ASTROPY_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}astropy>=0:astro/py-astropy@${FLAVOR}
MATPLOTLIB_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}matplotlib>=0.98:math/py-matplotlib@${FLAVOR}
PYGAME_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}game>=1.8.1:devel/py-game@${FLAVOR}

.include <bsd.port.mk>
