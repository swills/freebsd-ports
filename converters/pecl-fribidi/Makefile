# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: head/converters/pecl-fribidi/Makefile 456296 2017-12-14 13:57:28Z tz $

PORTNAME=	fribidi
PORTVERSION=	1.2
PORTREVISION=	2
CATEGORIES=	converters pear

MAINTAINER=	ale@FreeBSD.org
COMMENT=	PECL extension for the Unicode Bidi algorithm

LIB_DEPENDS=	libfribidi.so:converters/fribidi

USES=		php:pecl pkgconfig
IGNORE_WITH_PHP=	70 71 72

CONFIGURE_ARGS=	--with-fribidi=${LOCALBASE}

.include <bsd.port.mk>
