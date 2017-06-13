# Created by: Bill Fumerola <billf@chc-chimes.com>
# $FreeBSD: head/graphics/g2/Makefile 418829 2016-07-20 09:33:31Z dinoex $

PORTNAME=	g2
PORTVERSION=	0.40
PORTREVISION=	10
CATEGORIES=	graphics
MASTER_SITES=	SUNSITE/libs/graphics

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Easy to use, portable, and powerful 2D graphics library

LIB_DEPENDS=	libgd.so:graphics/gd

USE_XORG=	x11
GNU_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include

post-patch:
	@${REINPLACE_CMD} -E 's,(INC|LIB)DIR),DESTDIR)$$(&,g' \
		${WRKSRC}/Makefile.in

do-build:
	cd ${WRKSRC} ; make depend ; make

.include <bsd.port.mk>
