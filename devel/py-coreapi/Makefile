# $FreeBSD: head/devel/py-coreapi/Makefile 465633 2018-03-26 19:49:46Z yuri $

PORTNAME=	coreapi
DISTVERSION=	2.3.3
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	freebsd_ports@k-worx.org
COMMENT=	Python client library for Core API

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}click>0:devel/py-click@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}coreschema>0:devel/py-coreschema@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}itypes>0:devel/py-itypes@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}requests>0:www/py-requests@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}uritemplate>0:net/py-uritemplate@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
