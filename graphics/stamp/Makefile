# Created by: Bill Fumerola <billf@chc-chimes.com>
# $FreeBSD: head/graphics/stamp/Makefile 491830 2019-02-01 15:32:12Z tobik $

PORTNAME=	stamp
PORTVERSION=	2.0.8
PORTREVISION=	11
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Adds a graphical, configurable timestamp to a grayscale image

USES=		jpeg
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib

post-patch:
	@${REINPLACE_CMD} -e 's#/usr/local/share/stamp#${DATADIR}#' \
		${WRKSRC}/configure

.include <bsd.port.mk>
