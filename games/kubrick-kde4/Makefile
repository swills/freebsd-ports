# $FreeBSD: head/games/kubrick-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kubrick
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	5
CATEGORIES=	games kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_GL=		glu
USE_KDE=	kdelibs libkdegames automoc4
USE_QT=		corelib gui opengl \
		moc_build qmake_build rcc_build uic_build

.include <${.CURDIR}/../kdegames-kde4/Makefile.common>
.include <bsd.port.mk>
