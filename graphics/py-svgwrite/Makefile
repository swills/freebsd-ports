# $FreeBSD: head/graphics/py-svgwrite/Makefile 495532 2019-03-12 23:21:54Z lwhsu $

PORTNAME=	svgwrite
PORTVERSION=	1.2.1
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	george@m5p.com
COMMENT=	Python library to create SVG drawings

LICENSE=	MIT

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyparsing>=0:devel/py-pyparsing@${PY_FLAVOR}

USES=		python zip
USE_PYTHON=	autoplist distutils

.include <bsd.port.mk>
