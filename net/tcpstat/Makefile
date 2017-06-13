# Created by: George Reid <greid@ukug.uk.freebsd.org>
# $FreeBSD: head/net/tcpstat/Makefile 420054 2016-08-11 09:01:05Z amdmi3 $

PORTNAME=	tcpstat
PORTVERSION=	1.5
CATEGORIES=	net
MASTER_SITES=	http://www.frenchfries.net/paul/tcpstat/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Program to report various network statistics

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/tcpstat bin/tcpprof \
		man/man1/tcpprof.1.gz man/man1/tcpstat.1.gz
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC} && ${INSTALL_DATA} AUTHORS ChangeLog README doc/Tips_and_Tricks.txt \
		${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
