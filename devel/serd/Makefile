# Created by: meka
# $FreeBSD: head/devel/serd/Makefile 447197 2017-08-03 08:28:36Z wen $

PORTNAME=	serd
PORTVERSION=	0.28.0
CATEGORIES=	devel
MASTER_SITES=	http://download.drobilla.net/

MAINTAINER=	meka@tilda.center
COMMENT=	C library for RDF syntax

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		pkgconfig tar:bzip2 waf
USE_LDCONFIG=	yes

PLIST_SUB=	VERSION=${PORTVERSION}

post-install:
	@${MV} ${STAGEDIR}${PREFIX}/share/man/man1 ${STAGEDIR}${PREFIX}/man/
	@${RMDIR} ${STAGEDIR}${PREFIX}/share/man
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/serdi
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/*.so

.include <bsd.port.mk>
