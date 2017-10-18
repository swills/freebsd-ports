# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: head/benchmarks/bonnie++/Makefile 451953 2017-10-13 08:09:19Z bapt $

PORTNAME=	bonnie++
PORTVERSION=	1.97.3
CATEGORIES=	benchmarks
MASTER_SITES=	https://www.coker.com.au/bonnie++/

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	Performance Test of Filesystem I/O

LICENSE=	GPLv2

GNU_CONFIGURE=	yes

USES=	shebangfix tar:tgz
SHEBANG_FILES=	bon_csv2txt.in

PORTDOCS=	readme.html

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} \
		's|/usr/share/|${PREFIX}/share/|g' ${WRKSRC}/bonnie++.8

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/readme.html ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
