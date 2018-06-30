# $FreeBSD: head/graphics/kcoloredit/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kcoloredit
PORTVERSION=	${APP_VER}.${EXTRA_VER}
PORTREVISION=	7
CATEGORIES=	graphics kde
MASTER_SITES=	KDE/stable/extragear
DISTNAME=	${PORTNAME}-${APP_VER}-kde${EXTRA_VER}
DIST_SUBDIR=	KDE/extragear

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Palette files editor for KDE

USES=		cmake gettext kde:4 qt:4 tar:bzip2
USE_KDE=	kdelibs automoc4
USE_QT=		corelib qmake_build moc_build rcc_build uic_build

APP_VER=	2.0.0
EXTRA_VER=	4.4.0

.include <bsd.port.mk>
