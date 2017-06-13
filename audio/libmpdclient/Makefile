# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: head/audio/libmpdclient/Makefile 437761 2017-04-04 22:43:09Z gblach $

PORTNAME=	libmpdclient
PORTVERSION=	2.11
CATEGORIES=	audio
MASTER_SITES=	http://www.musicpd.org/download/libmpdclient/2/

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	API library for interfacing MPD

GNU_CONFIGURE=	yes
USES=		tar:xz gmake libtool pathfix
USE_LDCONFIG=	yes
INSTALL_TARGET=	install-strip

OPTIONS_DEFINE=	DOCS DOXYGEN
OPTIONS_SUB=	yes
DOXYGEN_IMPLIES=	DOCS

DOXYGEN_BUILD_DEPENDS=	doxygen:devel/doxygen
DOXYGEN_CONFIGURE_OFF=	--disable-documentation

.include <bsd.port.mk>
