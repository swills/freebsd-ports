# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: head/textproc/bbe/Makefile 409062 2016-02-17 19:12:06Z amdmi3 $

PORTNAME=	bbe
PORTVERSION=	0.2.2
PORTREVISION=	1
CATEGORIES=	textproc
MASTER_SITES=	SF/${PORTNAME}-/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Sed-like editor for binary files

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

GNU_CONFIGURE=	yes

INFO=		${PORTNAME}

PLIST_FILES=	bin/${PORTNAME} man/man1/${PORTNAME}.1.gz
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/bbe.html ${STAGEDIR}${DOCSDIR}
.for i in AUTHORS ChangeLog README
	${INSTALL_DATA} ${WRKSRC}/${i} ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
