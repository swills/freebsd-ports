# Created by: Pedro Giffuni <pfg@FreeBSD.org>
# $FreeBSD: head/graphics/py-pivy/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	pivy
PORTVERSION=	0.5.0
PORTREVISION=	2
CATEGORIES=	graphics python
MASTER_SITES=	https://bitbucket.org/Coin3D/pivy/get/
DISTNAME=	8eab90908f2a

MAINTAINER=	pfg@FreeBSD.org
COMMENT=	Python binding for Coin

LICENSE=	MIT

BUILD_DEPENDS=	swig3.0:devel/swig30
LIB_DEPENDS=	libSoQt.so:x11-toolkits/soqt

USES=		compiler:c11 python:2.7 zip
USE_PYTHON=	autoplist distutils
BINARY_ALIAS=	swig=swig3.0

WRKSRC=		${WRKDIR}/Coin3D-pivy-${DISTNAME}

.include <bsd.port.mk>
