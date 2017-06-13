# Created by: Kimura Fuyuki <fuyuki@hadaly.org>
# $FreeBSD: head/print/libotf/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	libotf
PORTVERSION=	0.9.13
PORTREVISION=	2
CATEGORIES=	print devel textproc
MASTER_SITES=	SAVANNAH/m17n

MAINTAINER=	nikola.lecic@anthesphoria.net
COMMENT=	Library for handling OpenType fonts

LIB_DEPENDS=	libfreetype.so:print/freetype2

USES=		pathfix pkgconfig libtool:keepla
USE_XORG=	x11 xt xaw xmu
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
