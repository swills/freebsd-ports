# Created by: Bill Fumerola <billf@chc-chimes.com>
# $FreeBSD: head/graphics/stamp/Makefile 428135 2016-12-08 16:39:11Z tijl $

PORTNAME=	stamp
PORTVERSION=	2.0.8
PORTREVISION=	10
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Adds a graphical, configurable timestamp to a grayscale image

USES=		jpeg
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib

OPTIONS_DEFINE=	X11
OPTIONS_SUB=	yes
X11_USE=	GNOME=gtk12

post-patch:
	@${REINPLACE_CMD} -e 's#/usr/local/share/stamp#${DATADIR}#' \
		${WRKSRC}/configure

.include <bsd.port.mk>
