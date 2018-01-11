# Created by: Andrey Zakhvatov
# $FreeBSD: head/textproc/c2html/Makefile 458761 2018-01-11 18:09:00Z danfe $

PORTNAME=	c2html
PORTVERSION=	0.9.6
CATEGORIES=	textproc www
MASTER_SITES=	SUNSITE/apps/www/converters

MAINTAINER=	mkamm@gmx.net
COMMENT=	C-language sources to HTML converter

LICENSE=	GPLv2

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/c2html man/man1/c2html.1.gz
PORTDOCS=	AUTHORS NEWS README

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
