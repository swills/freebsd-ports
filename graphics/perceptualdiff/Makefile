# Created by: sobomax
# $FreeBSD: head/graphics/perceptualdiff/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	perceptualdiff
PORTVERSION=	2.1
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	graphics

MAINTAINER=	sobomax@FreeBSD.org
COMMENT=	Program that compares two images

LICENSE=	GPLv2

LIB_DEPENDS=	libfreeimage.so:graphics/freeimage

PLIST_FILES=	bin/perceptualdiff

USE_GITHUB=	yes
GH_ACCOUNT=	myint

USES=		cmake compiler:c++0x

.include <bsd.port.mk>
