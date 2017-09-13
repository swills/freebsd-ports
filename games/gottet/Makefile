# Created by: Rusmir Dusko <nemysis@FreeBSD.org>
# $FreeBSD: head/games/gottet/Makefile 449591 2017-09-10 20:55:38Z gerald $

PORTNAME=	gottet
PORTVERSION=	1.1.3
PORTREVISION=	3
DISTVERSIONSUFFIX=	-src
CATEGORIES=	games
MASTER_SITES=	http://gottcode.org/gottet/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Tetris clone

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

USES=		compiler:c++11-lib qmake tar:bzip2
USE_GL=		gl
USE_QT5=	core gui widgets \
		buildtools_build linguisttools_build

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

post-patch:
	@${REINPLACE_CMD} -e \
		's|share/man|man|' ${WRKSRC}/gottet.pro

post-patch-NLS-off:
	@${REINPLACE_CMD} -e \
		'/INSTALLS/s|qm||' ${WRKSRC}/gottet.pro

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} CREDITS ChangeLog NEWS README \
		${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
