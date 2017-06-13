# $FreeBSD: head/graphics/gnustep-slideshow/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	slideshow
PORTVERSION=	0.3.5
PORTREVISION=	5
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
