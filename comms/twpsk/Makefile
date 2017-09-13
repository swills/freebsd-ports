# $FreeBSD: head/comms/twpsk/Makefile 449646 2017-09-11 14:09:56Z db $

PORTNAME=	twpsk
PORTVERSION=	4.3
CATEGORIES=	comms hamradio
MASTER_SITES=	http://wa0eir.bcts.info/src/
DISTNAME=	${PORTNAME}-${PORTVERSION}.src

MAINTAINER=	takefu@airport.fm
COMMENT=	X psk31 client

LICENSE=	GPLv3

USES=		motif pkgconfig
USE_XORG=	sm ice xt x11

LIB_DEPENDS=	libpulse.so:audio/pulseaudio

GNU_CONFIGURE=	yes
CFLAGS+=	-L${LOCALBASE}/lib -I${PREFIX}/include
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
PORTDOCS=	*

.include <bsd.port.mk>
