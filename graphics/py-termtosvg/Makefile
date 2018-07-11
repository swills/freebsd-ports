# $FreeBSD: head/graphics/py-termtosvg/Makefile 474208 2018-07-08 22:35:56Z lwhsu $

PORTNAME=	termtosvg
PORTVERSION=	0.4.0
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Record terminal sessions as SVG animations

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}svgwrite>=0:graphics/py-svgwrite@${PY_FLAVOR} \
		${PYTHON_PKGNAMEPREFIX}pyte>=0:devel/py-pyte@${PY_FLAVOR}

USES=		python:3.3+
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
