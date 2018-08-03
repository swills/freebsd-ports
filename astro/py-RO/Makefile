# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/astro/py-RO/Makefile 475617 2018-07-28 23:23:46Z yuri $

PORTNAME=	RO
PORTVERSION=	3.6.9
PORTREVISION=	2
CATEGORIES=	astro python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Package of Python astronomical utilities

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/docs/License.txt

RUN_DEPENDS=	${PYNUMPY}

OPTIONS_DEFINE=	ASTROPY MATPLOTLIB PYGAME
OPTIONS_DEFAULT=ASTROPY
ASTROPY_DESC=	Add Support for Astropy
MATPLOTLIB_DESC=Add support for Matplotlib
PYGAME_DESC=	Add Support for PyGame

NO_ARCH=	yes
USES=		python
USE_PYTHON=	autoplist distutils

ASTROPY_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}astropy>=0:astro/py-astropy@${PY_FLAVOR}
MATPLOTLIB_RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}matplotlib>=0.98:math/py-matplotlib@${PY_FLAVOR}
PYGAME_RUN_DEPENDS=	${PYGAME}

.include <bsd.port.mk>
