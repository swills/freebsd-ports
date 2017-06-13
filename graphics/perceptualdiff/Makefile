# Created by: sobomax
# $FreeBSD: head/graphics/perceptualdiff/Makefile 441468 2017-05-22 16:04:19Z linimon $

PORTNAME=	perceptualdiff
PORTVERSION=	2.1
DISTVERSIONPREFIX=	v
CATEGORIES=	graphics

MAINTAINER=	sobomax@FreeBSD.org
COMMENT=	Program that compares two images

LICENSE=	GPLv2

LIB_DEPENDS=	libfreeimage.so:graphics/freeimage

BROKEN_powerpc64=	fails to compile: cc1plus: unrecognized command line option "-std=c++0x"

PLIST_FILES=	bin/perceptualdiff

USE_GITHUB=	yes
GH_ACCOUNT=	myint

USES=		cmake

.include <bsd.port.mk>
