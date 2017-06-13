# Created by: Herbert J. Skuhra <h.skuhra@gmail.com>
# $FreeBSD: head/audio/mixmos/Makefile 428152 2016-12-08 19:52:19Z tijl $

PORTNAME=	mixmos
PORTVERSION=	0.2.0
PORTREVISION=	10
CATEGORIES=	audio
MASTER_SITES=	TUCOWS

MAINTAINER=	h.skuhra@gmail.com
COMMENT=	GTK2 audio mixer

USES=		pkgconfig
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
