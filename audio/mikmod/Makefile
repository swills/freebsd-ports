# Created by: Yoshiaki Uchikawa
# $FreeBSD: head/audio/mikmod/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTNAME=	mikmod
PORTVERSION=	3.2.7
CATEGORIES=	audio
MASTER_SITES=	SF \
		LOCAL/ehaupt

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Mod player which plays MTM, STM, XM, MOD, S3M, ULT, UNI, and IT mods

LICENSE=	GPLv2

LIB_DEPENDS=	libmikmod.so:audio/libmikmod

USES=		gmake ncurses
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/mikmod \
		man/man1/mikmod.1.gz \
		%%DATADIR%%/mikmodrc
PORTDOCS=	AUTHORS NEWS README

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
