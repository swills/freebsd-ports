# Created by: arved
# $FreeBSD: head/games/qnetwalk/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	qnetwalk
PORTVERSION=	1.4
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	http://qt.osdn.org.ua/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Qt-version of the NetWalk game

LICENSE=	GPLv2

USES=		qmake qt:4
USE_QT=		corelib gui moc_build rcc_build
USE_SDL=	mixer

PLIST_FILES=	bin/qnetwalk \
		man/man6/qnetwalk.6.gz \
		share/applications/qnetwalk.desktop \
		share/pixmaps/qnetwalk.xpm

PORTDOCS=	ChangeLog README
PORTDATA=	*

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/games|$$$${PREFIX}/bin|; \
		s|/usr/share/man|$$$${PREFIX}/man|; \
		s|/usr/share|$$$${PREFIX}/share|; \
		/INSTALLS.*menu/ d' ${WRKSRC}/${PORTNAME}.pro

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
