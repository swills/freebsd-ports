# Created by: JunSeon Oh <hollywar@mail.holywar.net>
# $FreeBSD: head/www/mod_fastcgi/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	mod_fastcgi
PORTVERSION=	2.4.7
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://www.fastcgi.com/dist/ \
		LOCAL/ohauer
DISTNAME=	mod_fastcgi-SNAP-0910052141
DIST_SUBDIR=	apache2

MAINTAINER=	apache@FreeBSD.org
COMMENT=	Apache 2.2 fast-cgi module

USES=		apache:2.2+
AP_FAST_BUILD=	yes
AP_GENPLIST=	yes
SRC_FILE=	*.c
PORTDOCS=	mod_fastcgi.html

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/docs/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
