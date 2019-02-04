# $FreeBSD: head/devel/py-openapi-codec/Makefile 491837 2019-02-01 18:55:18Z kai $

PORTNAME=	openapi-codec
DISTVERSION=	1.3.2
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	kai@FreeBSD.org
COMMENT=	OpenAPI codec for Core API

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}coreapi>0:devel/py-coreapi@${PY_FLAVOR}

USES=		python
USE_PYTHON=	distutils autoplist
NO_ARCH=	yes

.include <bsd.port.mk>
