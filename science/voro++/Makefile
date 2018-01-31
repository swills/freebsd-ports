# $FreeBSD: head/science/voro++/Makefile 460452 2018-01-31 01:07:07Z jwb $

PORTNAME=	voro++
PORTVERSION=	0.4.6
CATEGORIES=	science
MASTER_SITES=	http://math.lbl.gov/voro++/download/dir/

MAINTAINER=	jwb@FreeBSD.org
COMMENT=	Three-dimensional computations of the Voronoi tessellation

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		gmake

post-patch:
	${REINPLACE_CMD} \
		-e 's|CXX=|CXX?=|g' \
		-e 's|CFLAGS=|CFLAGS?=|g' \
		-e 's|PREFIX=.*|PREFIX?=|g' \
		${WRKSRC}/config.mk
	${REINPLACE_CMD} \
		-e 's|$$(PREFIX)|$$(DESTDIR)$$(PREFIX)|g' \
		${WRKSRC}/Makefile

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/voro++

.include <bsd.port.mk>
