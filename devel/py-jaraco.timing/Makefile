# Created by: William Grzybowski <wg@FreeBSD.org>
# $FreeBSD: head/devel/py-jaraco.timing/Makefile 472884 2018-06-20 17:05:41Z mat $

PORTNAME=	jaraco.timing
PORTVERSION=	1.1.5
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	wg@FreeBSD.org
COMMENT=	Routines pertinent to the fourth dimension

LICENSE=	MIT

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}hgtools>0:devel/py-hgtools@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pytest-runner>0:devel/py-pytest-runner@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}setuptools_scm>0:devel/py-setuptools_scm@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
