# Created by: Dave Cottlehuber <dch@skunkwerks.at>
# $FreeBSD: head/graphics/py-cairocffi/Makefile 437565 2017-04-02 15:49:10Z miwi $

PORTNAME=	cairocffi
PORTVERSION=	0.8.0
PORTREVISION=	1
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	dch@skunkwerks.at
COMMENT=	Cairo cffi-based cairo bindings for Python

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}cffi>0:devel/py-cffi
BUILD_DEPENDS=	${RUN_DEPENDS}

USES=		python:2+
USE_PYTHON=	autoplist distutils cffi
USE_GNOME=	cairo

.include <bsd.port.mk>
