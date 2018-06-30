# $FreeBSD: head/games/katomic-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	katomic
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	5
CATEGORIES=	games kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:4 qt:4 shebangfix tar:xz
USE_KDE=	kdelibs libkdegames automoc4
SHEBANG_FILES=	katomic-levelset-upd.pl
USE_QT=		moc_build qmake_build rcc_build uic_build

.include <${.CURDIR}/../kdegames-kde4/Makefile.common>
.include <bsd.port.mk>
