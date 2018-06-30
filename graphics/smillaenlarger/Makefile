# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/graphics/smillaenlarger/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	smillaenlarger
DISTVERSION=	0.9.0
CATEGORIES=	graphics
MASTER_SITES=	SF/imageenlarger/imageenlarger/SmillaEnlarger%20Release%20${PORTVERSION}/
DISTNAME=	SmillaEnlarger_${PORTVERSION}_source

MAINTAINER=	danfe@FreeBSD.org
COMMENT=	Qt-based tool for high-quality image magnification/resizing

LICENSE=	GPLv3

USES=		qmake qt:4 zip
USE_QT=		qmake_build moc_build rcc_build uic_build gui

WRKSRC=		${WRKDIR}/${DISTNAME}/SmillaEnlargerSrc

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	ReadMe.rtf WhatsNew.rtf changelog.txt

OPTIONS_DEFINE=	DOCS

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/SmillaEnlarger \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/../,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
