# $FreeBSD: head/multimedia/msopenh264/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	msopenh264
PORTVERSION=	1.1.2
PORTREVISION=	1
CATEGORIES=	multimedia net
MASTER_SITES=	SAVANNAH/linphone/plugins/sources/

MAINTAINER=	tijl@FreeBSD.org
COMMENT=	Mediastreamer plugin for H264 encoding/decoding

LIB_DEPENDS=	libmediastreamer_base.so:net/mediastreamer \
		libopenh264.so:multimedia/openh264

USES=		libtool pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-strict
INSTALL_TARGET=	install-strip

.include <bsd.port.mk>
