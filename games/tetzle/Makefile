# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: head/games/tetzle/Makefile 457639 2017-12-30 21:20:00Z amdmi3 $

PORTNAME=	tetzle
PORTVERSION=	2.1.2
CATEGORIES=	games
MASTER_SITES=	https://gottcode.org/tetzle/ \
		https://mirror.amdmi3.ru/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Jigsaw puzzle with tetrominoes

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		compiler:c++11-lib desktop-file-utils qmake tar:bzip2
USE_QT5=	core gui widgets buildtools_build linguisttools_build
USE_GL=		gl
INSTALLS_ICONS=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
