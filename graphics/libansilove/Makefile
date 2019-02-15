# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/graphics/libansilove/Makefile 492789 2019-02-12 16:37:47Z amdmi3 $

PORTNAME=	libansilove
PORTVERSION=	1.1.1
CATEGORIES=	graphics

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Library for converting ANSI, ASCII, and other formats to PNG

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libgd.so:graphics/gd

USE_GITHUB=	yes
GH_ACCOUNT=	ansilove

USES=		cmake

PORTDOCS=	AUTHORS ChangeLog README.md THANKS TODO

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${STAGEDIR}${DOCSDIR}/
.endfor

.include <bsd.port.mk>
