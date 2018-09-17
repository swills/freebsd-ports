# $FreeBSD: head/x11/xrx/Makefile 479538 2018-09-11 18:34:27Z zeising $

PORTNAME=	xrx
PORTVERSION=	1.0.4
PORTREVISION=	5
CATEGORIES=	x11

MAINTAINER=	x11@FreeBSD.org
COMMENT=	RX helper program

XORG_CAT=	app
USE_XORG=	x11 xt xext xtrans xorgproto xau xaw ice
USES=		libtool
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|mozilla-plugin|disabled-libxul-plugin|g' \
		${WRKSRC}/configure

.include <bsd.port.mk>
