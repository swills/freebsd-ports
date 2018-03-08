# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/graphics/php-facedetect/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	facedetect
PORTVERSION=	1.1
PORTREVISION=	6
CATEGORIES=	graphics
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

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
