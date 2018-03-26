# $FreeBSD: head/graphics/skanlite-kde4/Makefile 465503 2018-03-25 08:09:39Z adridg $

PORTNAME=	skanlite
PORTVERSION=	1.1
PORTREVISION=	7
CATEGORIES=	graphics kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}/src
PKGNAMESUFFIX=	-kde4
DIST_SUBDIR=	KDE/extragear

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Simple image scanning application for KDE

LIB_DEPENDS=	libksane.so:graphics/libksane-kde4

USES=		cmake:outsource gettext kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
