# Created by: Vincent Tantardini <vinc@FreeBSD-fr.org>
# $FreeBSD: head/audio/cuetools/Makefile 460181 2018-01-28 13:37:42Z novel $

PORTNAME=	cuetools
DISTVERSION=	1.4.1
CATEGORIES=	audio

MAINTAINER=	novel@FreeBSD.org
COMMENT=	Utilities for working with CUE and TOC files

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		autoreconf gmake
GNU_CONFIGURE=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	svend

PORTDOCS=	README.md

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
