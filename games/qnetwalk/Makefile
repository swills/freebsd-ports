# Created by: arved
# $FreeBSD: head/games/qnetwalk/Makefile 487378 2018-12-13 19:26:39Z amdmi3 $

PORTNAME=	qnetwalk
PORTVERSION=	1.5
CATEGORIES=	games

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Game for system administrators

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	AMDmi3

USES=		cmake qt:5
USE_QT=		core gui widgets qmake_build buildtools_build linguisttools_build
USE_SDL=	mixer sdl

PORTDOCS=	ChangeLog.md README.md
PORTDATA=	*

OPTIONS_DEFINE=	DOCS

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
