# Created by: sobomax
# $FreeBSD: head/net/rtpproxy/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	rtpproxy
PORTVERSION=	2.0.0
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	net

MAINTAINER=	farrokhi@FreeBSD.org
COMMENT=	High-performance RTP proxy server for the SIP Express Router (SER)

LICENSE=	BSD2CLAUSE

LIB_DEPENDS=	libgsm.so:audio/gsm

USE_GITHUB=	yes
GH_ACCOUNT=	sippy

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib

USERS=		${PORTNAME}
GROUPS=		${PORTNAME}

post-build:
	${SED} 's|%%PREFIX%%|${PREFIX}|g ; s|%%RC_SUBR%%|/etc/rc.subr|g' \
	    ${WRKSRC}/scripts/rtpproxy.in.freebsd > ${WRKDIR}/rtpproxy

post-install:
	${INSTALL_SCRIPT} ${WRKDIR}/rtpproxy ${STAGEDIR}${PREFIX}/etc/rc.d/rtpproxy

.include <bsd.port.mk>
