# Created by: brett@peloton.physics.montana.edu
# $FreeBSD$

PORTNAME=	cooledit
DISTVERSION=	4.0.0
CATEGORIES=	editors
MASTER_SITES=	SUNSITE/apps/editors/X/cooledit

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Suite of utilities, including a GUI editor

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gettext-runtime gmake libtool pkgconfig python xorg
GNU_CONFIGURE=	yes
USE_XORG=	x11 xt
USE_LDCONFIG=	yes
USE_GCC=	any
INSTALL_TARGET=	install-strip

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-lpthread -L${LOCALBASE}/lib
CFLAGS+=	-DHAVE_MBRTOWC

LIB_DEPENDS=	libfreetype.so:print/freetype2

OPTIONS_DEFINE=	NEXT_LOOK
NEXT_LOOK_DESC=	Enable NeXT look
NEXT_LOOK_CONFIGURE_ENABLE=	NeXT-look

.include <bsd.port.mk>
