# Created by: Abel Chow <achow@transoft.net>
# $FreeBSD: head/www/tidy/Makefile 422753 2016-09-25 16:39:04Z dinoex $

PORTNAME=	tidy4
PORTVERSION=	20000804
PORTREVISION=	3
CATEGORIES=	www
MASTER_SITES=	http://www.w3.org/People/Raggett/
DISTNAME=	tidy4aug00

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fixes and tidies up HTML files

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${FILESDIR}/COPYRIGHT

USES=		tar:tgz
ALL_TARGET=	tidy
DOCFILES=	Overview.html tidy.gif release-notes.html grid.gif

OPTIONS_DEFINE=	DOCS

do-configure:
	${REINPLACE_CMD} -e 's|tidy|tidy4|' ${WRKSRC}/man_page.txt

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/tidy ${STAGEDIR}${PREFIX}/bin/tidy4
	${INSTALL_MAN}	${WRKSRC}/man_page.txt	${STAGEDIR}${PREFIX}/man/man1/tidy4.1
	${MKDIR} ${STAGEDIR}${DOCSDIR}
.for docfile in ${DOCFILES}
	${INSTALL_MAN} ${WRKSRC}/${docfile} ${STAGEDIR}${DOCSDIR}/
.endfor

.include <bsd.port.mk>
