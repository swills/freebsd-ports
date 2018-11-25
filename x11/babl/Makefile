# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: head/x11/babl/Makefile 485774 2018-11-24 13:59:59Z kwm $

PORTNAME=	babl
PORTVERSION=	0.1.60
CATEGORIES=	x11
MASTER_SITES=	GIMP

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Dynamic pixel format conversion library

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		compiler:c11 gmake libtool pathfix pkgconfig tar:bzip2

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	SIMD
OPTIONS_DEFAULT=SIMD

SIMD_CONFIGURE_OFF=	--disable-mmx --disable-sse --disable-sse2 \
		--disable-sse3 --disable-sse4_1 --disable-f16c \
		--disable-altivec

post-patch:
	@${REINPLACE_CMD} -e 's|x86_64|amd64|g' \
		${WRKSRC}/configure

.include <bsd.port.mk>
