# Created by: Michael Beer <beerml@sigma6audio.de>
# $FreeBSD: head/devel/sord/Makefile 442784 2017-06-06 16:38:00Z mat $

PORTNAME=	sord
PORTVERSION=	0.16.0
CATEGORIES=	devel
MASTER_SITES=	http://download.drobilla.net/

MAINTAINER=	beerml@sigma6audio.de
COMMENT=	Sord is a lightweight C library for storing RDF data in memory

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libserd-0.so:devel/serd libpcre.so:devel/pcre

USES=		pkgconfig python:build tar:bzip2 waf

USE_LDCONFIG=	yes

post-install:
	@${MV} ${STAGEDIR}${PREFIX}/share/man/man1 ${STAGEDIR}${PREFIX}/man/
	@${RMDIR} ${STAGEDIR}${PREFIX}/share/man
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libsord-0.so.0.16.0
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/sord_validate
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/sordi

.include <bsd.port.mk>
