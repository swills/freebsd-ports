# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/science/py-pysal/Makefile 486349 2018-12-01 13:06:37Z sunpoet $

PORTNAME=	pysal
PORTVERSION=	1.14.4
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PySAL-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Cross-platform library of spatial analysis functions

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${RUN_DEPENDS}
RUN_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}scipy>=0.11:science/py-scipy@${PY_FLAVOR}
TEST_DEPENDS=	${PYTHON_PKGNAMEPREFIX}nose>=0:devel/py-nose@${PY_FLAVOR}

USES=		python
USE_PYTHON=	autoplist concurrent distutils

NO_ARCH=	yes

post-patch:
	@${REINPLACE_CMD} -e '/check_stable=/ s|True|False|' ${WRKSRC}/pysal/config.py

.include <bsd.port.mk>
