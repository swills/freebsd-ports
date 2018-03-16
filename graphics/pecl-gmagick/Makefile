# Created by: Dan Rowe <bsdports@csnstores.com>
# $FreeBSD: head/graphics/pecl-gmagick/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	gmagick
PORTVERSION=	1.1.7RC3
PORTREVISION=	2
CATEGORIES=	graphics

MAINTAINER=	bsdports@wayfair.com
COMMENT=	Provides a wrapper to the GraphicsMagick library

LICENSE=	PHP301

LIB_DEPENDS=	libGraphicsMagick.so:graphics/GraphicsMagick

USES=		php:pecl

IGNORE_WITH_PHP=	70 71 72

CONFIGURE_ARGS=	--with-gmagick=${LOCALBASE}

.include <bsd.port.mk>
