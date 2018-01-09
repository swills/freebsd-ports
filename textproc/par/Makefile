# Created by: Mark R V Murray <mark@grondar.za>
# $FreeBSD: head/textproc/par/Makefile 458513 2018-01-09 07:40:55Z mat $

PORTNAME=	par
PORTVERSION=	1.52
PORTREVISION=	1
PKGNAMESUFFIX=	_format
CATEGORIES=	textproc
MASTER_SITES=	http://www.nicemice.net/par/
DISTNAME=	Par${PORTVERSION:S|.||}

MAINTAINER=	markm@FreeBSD.org
COMMENT=	Paragraph reformatter for email

CONFLICTS=	quake-par-[0-9]*

ALL_TARGET=	#
PLIST_FILES=	bin/par \
		man/man1/par.1.gz

do-configure:
	(cd ${WRKSRC}; ${CP} protoMakefile Makefile)

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/par ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/par.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
