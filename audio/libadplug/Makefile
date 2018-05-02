# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/audio/libadplug/Makefile 468095 2018-04-23 15:27:56Z ehaupt $

PORTNAME=	adplug
PORTVERSION=	2.3.1
DISTVERSIONPREFIX=	${PORTNAME}-
CATEGORIES=	audio
PKGNAMEPREFIX=	lib

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	AdLib emulator library supporting many formats

LICENSE=	GPLv2

LIB_DEPENDS=	libbinio.so:devel/libbinio

USES=		autoreconf libtool makeinfo pathfix pkgconfig
GNU_CONFIGURE=	yes
USE_GITHUB=	yes
USE_LDCONFIG=	yes
USE_CSTD=	gnu89

INFO=		libadplug

CONFIGURE_ARGS+=	--enable-maintainer-mode

INSTALL_TARGET=	install-strip

PLIST_SUB+=	PORTVERSION=${PORTVERSION}

.include <bsd.port.mk>
