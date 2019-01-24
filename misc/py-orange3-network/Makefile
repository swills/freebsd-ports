# $FreeBSD: head/misc/py-orange3-network/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	orange3-network
DISTVERSION=	1.3.2
PORTREVISION=	2
CATEGORIES=	misc python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Network analysis add-on for Orange data mining suite

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	orange3>0:misc/orange3 \
		${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}networkx>0:math/py-networkx@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyqtgraph>0:graphics/py-pyqtgraph@${PY_FLAVOR}

USES=		python:3.4+
USE_GITHUB=	yes
GH_ACCOUNT=	biolab
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
