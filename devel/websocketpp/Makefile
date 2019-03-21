# $FreeBSD: head/devel/websocketpp/Makefile 496346 2019-03-20 14:53:29Z jbeich $

PORTNAME=	websocketpp
PORTVERSION=	0.8.1
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	arved@FreeBSD.org
COMMENT=	Header only implementation of the WebSocket protocol

LICENSE=	MIT BSD3CLAUSE ZLIB
LICENSE_COMB=	multi
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake:insource
USE_GITHUB=	yes
GH_ACCOUNT=	zaphoyd

NO_ARCH=	yes

post-stage: # https://github.com/zaphoyd/websocketpp/issues/781
	@${RMDIR} ${STAGEDIR}${PREFIX}/include/websocketpp/CMakeFiles

.include <bsd.port.mk>
