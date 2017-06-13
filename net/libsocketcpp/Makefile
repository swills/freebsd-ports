# Created by: ijliao
# $FreeBSD: head/net/libsocketcpp/Makefile 405891 2016-01-12 16:20:31Z amdmi3 $

PORTNAME=	libsocketcpp
PORTVERSION=	1.0.7
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	SF/libsocket/${PORTNAME}-stable/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	C++ wrapper library to the sockets

LICENSE=	LGPL21+
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		libtool
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libsocketcpp.so

.include <bsd.port.mk>
