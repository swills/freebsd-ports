# $FreeBSD: head/audio/opus-tools/Makefile 437876 2017-04-06 20:59:33Z naddy $

PORTNAME=	opus-tools
PORTVERSION=	0.1.10
CATEGORIES=	audio
MASTER_SITES=	http://downloads.xiph.org/releases/opus/ \
		MOZILLA/opus

MAINTAINER=	naddy@FreeBSD.org
COMMENT=	Encode, inspect, and decode Opus files

LICENSE=	BSD2CLAUSE GPLv2
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libFLAC.so:audio/flac \
		libogg.so:audio/libogg \
		libopus.so:audio/opus

USES=		pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-maintainer-mode

.include <bsd.port.mk>
