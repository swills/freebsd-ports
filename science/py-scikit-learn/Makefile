# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/science/py-scikit-learn/Makefile 460791 2018-02-03 06:41:30Z riggs $

PORTNAME=	scikit-learn
PORTVERSION=	0.19.1
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Machine learning algorithms for python

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_SITELIBDIR}/scipy/version.py:science/py-scipy@${FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		fortran python
USE_PYTHON=	distutils autoplist

LDFLAGS+=	-shared

.include <bsd.port.mk>
