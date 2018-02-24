# $FreeBSD: head/games/klickety-kde4/Makefile 462619 2018-02-22 19:03:17Z tcberner $

PORTNAME=	klickety
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	5
CATEGORIES=	games kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:4 shebangfix tar:xz
USE_KDE=	kdelibs libkdegames automoc4
SHEBANG_FILES=	klickety-2.0-inherit-ksame-highscore.pl
USE_QT4=	corelib gui xml \
		moc_build qmake_build rcc_build uic_build

.include <${.CURDIR}/../kdegames-kde4/Makefile.common>
.include <bsd.port.mk>
