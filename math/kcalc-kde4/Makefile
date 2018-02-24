# $FreeBSD: head/math/kcalc-kde4/Makefile 462619 2018-02-22 19:03:17Z tcberner $

PORTNAME=	kcalc
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	math kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Scientific calculator for KDE

LIB_DEPENDS=	libgmp.so:math/gmp \
		libmpfr.so:math/mpfr

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	xml qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
