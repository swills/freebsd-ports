# $FreeBSD: head/devel/libsearpc/Makefile 441787 2017-05-26 15:02:08Z lifanov $

PORTNAME=	libsearpc
PORTVERSION=	3.0.8
PORTEPOCH=	1
CATEGORIES=	devel

MAINTAINER=	ultima1252@gmail.com
COMMENT=	Simple RPC framework based on GObject System in C

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libjansson.so:devel/jansson \
		libgobject-2.0.so:devel/glib20

USE_GITHUB=	yes
GH_ACCOUNT=	haiwen
GH_TAGNAME=	12a0126

USES=		autoreconf gettext libtool pathfix pkgconfig python:2
USE_LDCONFIG=	yes

GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
