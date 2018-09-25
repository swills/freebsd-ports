# Created by: nwhitehorn
# $FreeBSD$

PORTNAME=	astropy
DISTVERSION=	3.0.4
CATEGORIES=	astro
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nwhitehorn@FreeBSD.org
COMMENT=	Community-developed python astronomy tools

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	${PYNUMPY} \
		${PYTHON_PKGNAMEPREFIX}Jinja2>=0.6:devel/py-Jinja2@${PY_FLAVOR}
RUN_DEPENDS=	${PYNUMPY}

USES=		python:3.5+
USE_PYTHON=	autoplist concurrent cython distutils

.include <bsd.port.mk>
