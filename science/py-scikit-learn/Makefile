# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/science/py-scikit-learn/Makefile 475875 2018-07-30 09:38:14Z rm $

PORTNAME=	scikit-learn
PORTVERSION=	0.19.2
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	Machine learning algorithms for python

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_SITELIBDIR}/scipy/version.py:science/py-scipy@${PY_FLAVOR}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		fortran python
USE_PYTHON=	distutils autoplist

LDFLAGS+=	-shared

.include <bsd.port.mk>
