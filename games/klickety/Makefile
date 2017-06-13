# $FreeBSD: head/games/klickety/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	klickety
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	games kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:4 shebangfix tar:xz
USE_KDE=	kdelibs libkdegames automoc4
SHEBANG_FILES=	klickety-2.0-inherit-ksame-highscore.pl
USE_QT4=	corelib gui xml \
		moc_build qmake_build rcc_build uic_build

.include <${.CURDIR}/../kdegames4/Makefile.common>
.include <bsd.port.mk>
