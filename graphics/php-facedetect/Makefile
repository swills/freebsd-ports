# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/graphics/php-facedetect/Makefile 438490 2017-04-14 05:30:25Z jbeich $

PORTNAME=	facedetect
PORTVERSION=	1.1
PORTREVISION=	6
CATEGORIES=	graphics
PKGNAMEPREFIX=	php-

MAINTAINER=	mm@FreeBSD.org
COMMENT=	Face detection extension for PHP using OpenCV library

LICENSE=	PHP30

LIB_DEPENDS=	libopencv_objdetect.so:graphics/opencv

USE_GITHUB=	yes
GH_ACCOUNT=	infusion
GH_PROJECT=	PHP-Facedetect
GH_TAGNAME=	4b1dfe1

CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib -lopencv_core

USES=		php:ext

CONFIGURE_ARGS+=	--with-facedetect

.include <bsd.port.mk>
