# $FreeBSD: head/graphics/py-pyqtgraph/Makefile 472174 2018-06-11 08:49:18Z yuri $

PORTNAME=	pyqtgraph
DISTVERSION=	0.10.0
CATEGORIES=	graphics science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Scientific graphics and GUI library for Python

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	${PYNUMPY}

USES=		python
USE_PYTHON=	autoplist distutils
NO_ARCH=	yes

.include <bsd.port.mk>
