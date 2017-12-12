# $FreeBSD: head/graphics/gnustep-slideshow/Makefile 455401 2017-12-03 12:23:53Z theraven $

PORTNAME=	slideshow
PORTVERSION=	0.3.5
PORTREVISION=	7
CATEGORIES=	graphics gnustep
MASTER_SITES=	http://download.gna.org/gsimageapps/
PKGNAMEPREFIX=	gnustep-
DISTNAME=	SlideShow-${PORTVERSION}

MAINTAINER=	theraven@FreeBSD.org
COMMENT=	SlideShow Viewer

LICENSE=	GPLv2

USES=		tar:bzip2 gnustep
USE_GNUSTEP=	back build
LIB_DEPENDS=	libSlideShow.so:graphics/gnustep-slideshowkit

OBJCFLAGS+=	-Dsel_eq=sel_isEqual

.include <bsd.port.mk>
