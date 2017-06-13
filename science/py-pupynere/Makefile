# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/science/py-pupynere/Makefile 417356 2016-06-23 09:48:53Z tz $

PORTNAME=	pupynere
PORTVERSION=	1.0.15
PORTREVISION=	4
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	johannes@perceivon.net
COMMENT=	Python module for reading and writing NetCDF files

LICENSE=	MIT

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python:2
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
