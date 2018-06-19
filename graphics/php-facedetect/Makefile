# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/graphics/php-facedetect/Makefile 472372 2018-06-14 09:34:31Z amdmi3 $

PORTNAME=	facedetect
PORTVERSION=	1.1
PORTREVISION=	7
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

LIBS+=		-lopencv_core

USES=		localbase php:ext

CONFIGURE_ARGS+=	--with-facedetect

.include <bsd.port.mk>
