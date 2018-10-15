# Created by: Mark Felder <feld@FreeBSD.org>
# $FreeBSD: head/devel/py-traceback2/Makefile 481178 2018-10-03 18:17:44Z sunpoet $

PORTNAME=	traceback2
PORTVERSION=	1.4.0
PORTREVISION=	1
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	New features in traceback backported to Python 2

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pbr>0:devel/py-pbr@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}six>0:devel/py-six@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pbr>0:devel/py-pbr@${PY_FLAVOR}

LICENSE=	PSFL

USES=		python
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
