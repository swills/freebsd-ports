# Created by: Archie Cobbs
# $FreeBSD: head/net/sl2tps/Makefile 428144 2016-12-08 17:40:41Z tijl $

PORTNAME=	sl2tps
PORTVERSION=	0.4.2
PORTREVISION=	2
CATEGORIES=	net
MASTER_SITES=	SF/libpdel/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple L2TP server based on libpdel(3) and netgraph(4)

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

LIB_DEPENDS=	libpdel.so:devel/libpdel

USES=		uidfix

post-patch:
	@${REINPLACE_CMD} -e \
		's|$${PREFIX}/include|$${LOCALBASE}/include|g ; \
		 /-g/s|^CFLAGS|#CFLAGS|g ; \
		 s|$${PREFIX}/lib|$${LOCALBASE}/lib|g' ${WRKSRC}/Makefile

.include <bsd.port.mk>
