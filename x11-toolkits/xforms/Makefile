# Created by: gena
# $FreeBSD: head/x11-toolkits/xforms/Makefile 444251 2017-06-25 00:29:09Z linimon $

PORTNAME=	xforms
DISTVERSION=	1.2.4
PORTREVISION=	4
PORTEPOCH=	1
CATEGORIES=	x11-toolkits graphics
MASTER_SITES=	SAVANNAH

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Graphical user interface toolkit for X Window System

LICENSE=	LGPL21
LICENSE_FILE=	${WRKSRC}/COPYING.LIB

LIB_DEPENDS=	libtiff.so:graphics/tiff

USES=		jpeg libtool
USE_XORG=	xpm
USE_GL=		gl
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
INSTALL_TARGET=	install-strip

post-patch:
	${REINPLACE_CMD} 's|#define fl_draw_box|#define fl_drw_box|'	\
		${WRKSRC}/lib/include/Basic.h

.include <bsd.port.mk>
