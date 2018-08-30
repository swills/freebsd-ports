# $FreeBSD: head/sysutils/py-nomad/Makefile 476591 2018-08-07 12:13:47Z jhixson $

PORTNAME=	py-nomad
PORTVERSION=	0.5.0
CATEGORIES=	sysutils
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	jhixson@FreeBSD.org
COMMENT=	Python client for nomad

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.10.0:www/py-requests@${PY_FLAVOR}
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}requests>=2.10.0:www/py-requests@${PY_FLAVOR}

USES=	python:3.3+

USE_GITHUB=	yes
GH_ACCOUNT=	jrxFive
GH_PROJECT=	python-nomad

USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
