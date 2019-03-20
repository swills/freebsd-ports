# Created by: <intron@intron.ac>
# $FreeBSD: head/chinese/fandol/Makefile 495395 2019-03-11 21:25:57Z zeising $

PORTNAME=	fandol
PORTVERSION=	0.3
PORTREVISION=	1
CATEGORIES=	chinese
MASTER_SITES=	http://mirrors.ctan.org/fonts/
DISTNAME=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	CTAN Fandol: Four GNU GPLv3-licensed Chinese OpenType fonts

LICENSE=	GPLv3
LICENSE_FILES=	${WRKSRC}/fandol/COPYING

USES=		fonts zip
NO_WRKSUBDIR=	yes
NO_BUILD=	yes
NO_ARCH=	yes

FONTNAME=	fandol

SUB_FILES=	pkg-message

PORTDOCS=	README

OPTIONS_DEFINE=	DOCS

do-install:
	@${MKDIR} ${STAGEDIR}${FONTSDIR}
	${INSTALL_DATA} ${WRKSRC}/fandol/*.otf ${STAGEDIR}${FONTSDIR}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/fandol/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
