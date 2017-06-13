# Created by: Dan Rowe <bsdports@csnstores.com>
# $FreeBSD: head/graphics/pecl-gmagick/Makefile 438175 2017-04-10 15:08:47Z mat $

PORTNAME=	gmagick
PORTVERSION=	1.1.7RC3
PORTREVISION=	1
CATEGORIES=	graphics

MAINTAINER=	bsdports@wayfair.com
COMMENT=	Provides a wrapper to the GraphicsMagick library

LICENSE=	PHP301

LIB_DEPENDS=	libGraphicsMagick.so:graphics/GraphicsMagick

USES=		php:pecl

IGNORE_WITH_PHP=	70 71

CONFIGURE_ARGS=	--with-gmagick=${LOCALBASE}

.include <bsd.port.mk>
