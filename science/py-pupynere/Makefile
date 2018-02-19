# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/science/py-pupynere/Makefile 462307 2018-02-19 11:10:43Z antoine $

PORTNAME=	pupynere
PORTVERSION=	1.0.15
PORTREVISION=	5
CATEGORIES=	science python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	johannes@perceivon.net
COMMENT=	Python module for reading and writing NetCDF files

LICENSE=	MIT

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		python:2.7
USE_PYTHON=	distutils autoplist

.include <bsd.port.mk>
