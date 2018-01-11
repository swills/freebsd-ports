# Created by: Narvi <narvi@haldjas.folklore.ee>
# $FreeBSD: head/net/libsocket++/Makefile 458739 2018-01-11 14:18:01Z danfe $

PORTNAME=	libsocket++
PORTVERSION=	1.12.13
PORTREVISION=	3
CATEGORIES=	net
MASTER_SITES=	http://src.linuxhacker.at/socket++/
DISTNAME=	socket++-${PORTVERSION}

MAINTAINER=	arved@FreeBSD.org
COMMENT=	C++ wrapper library to the sockets

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYING

OPTIONS_DEFINE=	DOCS

GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
USES=		autoreconf libtool makeinfo

INFO=	socket++

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
