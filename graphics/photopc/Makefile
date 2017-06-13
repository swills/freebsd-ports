# Created by: Douglas Carmichael <dcarmich@mcs.com>
# $FreeBSD: head/graphics/photopc/Makefile 419234 2016-07-29 09:00:55Z amdmi3 $

PORTNAME=	photopc
PORTVERSION=	3.07
PORTREVISION=	1
CATEGORIES=	graphics
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Control cameras based on Sierra Imaging chipset and compatibles

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/epinfo \
		bin/photopc \
		include/eph_io.h \
		lib/libeph_io.a \
		man/man1/epinfo.1.gz \
		man/man1/photopc.1.gz
PORTDOCS=	README protocol.htm usage.htm

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
