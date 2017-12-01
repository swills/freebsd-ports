# Created by: vanilla
# $FreeBSD: head/graphics/pecl-qrencode/Makefile 455251 2017-12-01 07:19:53Z antoine $

PORTNAME=	qrencode
PORTVERSION=	0.6
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	graphics pear
PKGNAMEPREFIX=	pecl-
DIST_SUBDIR=	PECL

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	PECL extension for generate qrcode

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libqrencode.so:graphics/libqrencode \
		libpng.so:graphics/png

USES=		php:ext
USE_GITHUB=	yes
GH_ACCOUNT=	vanillahsu
GH_PROJECT=	pecl-qrencode

.include <bsd.port.mk>
