# Created by: TAKATSU Tomonari <tota@rtfm.jp>
# $FreeBSD: head/devel/silentbob/Makefile 432760 2017-01-29 15:42:46Z tota $

PORTNAME=	silentbob
PORTVERSION=	3.0
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}2/${PORTNAME}-${PORTVERSION:C@\.[0-9]+$@@}/

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Yet another sourcecode indexing tool

LICENSE=	GPLv2

USES=		cmake:outsource

PORTDOCS=	README
PLIST_FILES=	bin/silentbob

OPTIONS_DEFINE=	DOCS

post-patch:
	@${RM} ${WRKSRC}/CMakeCache.txt
	@${REINPLACE_CMD} -e '/lib\/silent_bob/s|/usr|${PREFIX}|' \
		${WRKSRC}/src/init.cxx

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
