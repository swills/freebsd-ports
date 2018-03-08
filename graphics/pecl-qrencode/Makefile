# Created by: vanilla
# $FreeBSD: head/graphics/pecl-qrencode/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	qrencode
PORTVERSION=	0.6
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	graphics pear

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	PECL extension for generate qrcode

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libqrencode.so:graphics/libqrencode \
		libpng.so:graphics/png

USES=		php:pecl
USE_GITHUB=	yes
GH_ACCOUNT=	vanillahsu
GH_PROJECT=	pecl-qrencode

.include <bsd.port.mk>
