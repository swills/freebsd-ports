# $FreeBSD: head/games/bovo-kde4/Makefile 462619 2018-02-22 19:03:17Z tcberner $

PORTNAME=	bovo
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	5
CATEGORIES=	games kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs libkdegames automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build
USE_CXXSTD=	gnu++98

.include <${.CURDIR}/../kdegames-kde4/Makefile.common>
.include <bsd.port.mk>
