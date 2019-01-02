# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: head/net/ortp/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	ortp
PORTVERSION=	1.0.2
PORTREVISION=	1
CATEGORIES=	net
MASTER_SITES=	https://www.linphone.org/releases/sources/ortp/

MAINTAINER=	sobomax@FreeBSD.org
COMMENT=	Real-time Transport Protocol (RTP) library

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libbctoolbox.so:net/bctoolbox

USES=		cmake compiler:c11
USE_LDCONFIG=	yes

CMAKE_ARGS=	-DENABLE_DOC=NO -DENABLE_STATIC=NO -DENABLE_STRICT=NO
WRKSRC= 	${WRKDIR}/${DISTNAME}-0

post-install:
	${RM} -r ${STAGEDIR}${PREFIX}/share/doc/${DISTNAME}

.include <bsd.port.mk>
