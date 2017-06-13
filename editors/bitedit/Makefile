# Created by: Michael L. Hostbaek (mich@freebsdcluster.org)
# $FreeBSD: head/editors/bitedit/Makefile 407622 2016-01-31 12:41:50Z marino $

PORTNAME=	bitedit
PORTVERSION=	0.9.4
CATEGORIES=	editors
MASTER_SITES=	http://freebsdcluster.org/~mich/software/

MAINTAINER=	mich@FreeBSD.org
COMMENT=	Bitedit is a simple ncurses program for editing a file

LICENSE=	GPLv2

USES=		ncurses
MAKE_ARGS=	CFLAGS="${CFLAGS} -DVERSION=\\\"${PORTVERSION}\\\""

DOCSDIR=	${PREFIX}/share/doc/${PORTNAME}

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/bitedit ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/bitedit.txt ${STAGEDIR}${DOCSDIR}/bitedit.txt

.include <bsd.port.mk>
