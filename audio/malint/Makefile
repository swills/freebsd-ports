# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: head/audio/malint/Makefile 451965 2017-10-13 08:58:28Z bapt $

PORTNAME=	malint
DISTVERSION=	0.2
CATEGORIES=	audio
MASTER_SITES=	http://www.nih.at/malint/ \
		LOCAL/ehaupt

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	MPEG Audio stream validator

LICENSE=	GPLv2

GNU_CONFIGURE=	yes

PORTDOCS=	README
PLIST_FILES=	bin/malint

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
