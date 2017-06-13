# Created by: james@targetnet.com
# $FreeBSD: head/net/libunp/Makefile 417041 2016-06-17 23:28:04Z mat $

PORTNAME=	libunp
PORTVERSION=	1.0
PORTREVISION=	1
CATEGORIES=	net ipv6
MASTER_SITES=	http://www.kohala.com/start/unpv12e/
DISTNAME=	unpv12e

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The networking library used in UNIX Network Programming Volume 1 2e

USES=		gmake
GNU_CONFIGURE=	yes

post-extract:
	@${CP} ${WRKSRC}/lib/wrapsock.c ${WRKSRC}/lib/wrapsock_r.c

post-configure:
	@${MKDIR} ${WRKSRC}/unp
	@${LN} -s ${WRKSRC}/config.h ${WRKSRC}/unp/config.h
	@${LN} -s ${WRKSRC}/lib/addrinfo.h ${WRKSRC}/unp/addrinfo.h

do-install:
	${INSTALL_DATA} ${WRKSRC}/libunp.a ${STAGEDIR}${PREFIX}/lib
	${INSTALL_DATA} ${WRKSRC}/libunp_r.a ${STAGEDIR}${PREFIX}/lib
	@${MKDIR} ${STAGEDIR}${PREFIX}/include/unp
	${INSTALL_DATA} ${WRKSRC}/lib/unp.h ${STAGEDIR}${PREFIX}/include
	${INSTALL_DATA} ${WRKSRC}/lib/addrinfo.h \
		${STAGEDIR}${PREFIX}/include/unp
	${INSTALL_DATA} ${WRKSRC}/config.h ${STAGEDIR}${PREFIX}/include/unp

.include <bsd.port.mk>
