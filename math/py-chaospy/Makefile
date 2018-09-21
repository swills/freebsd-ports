# $FreeBSD: head/math/py-chaospy/Makefile 479985 2018-09-18 07:42:57Z yuri $

PORTNAME=	chaospy
DISTVERSION=	2.3.5
CATEGORIES=	math python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Toolbox for performing uncertainty quantification

LICENSE=	MIT

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}networkx>0:math/py-networkx@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}scipy>0:science/py-scipy@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
