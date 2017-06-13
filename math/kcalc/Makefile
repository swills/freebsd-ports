# $FreeBSD: head/math/kcalc/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTNAME=	kcalc
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	1
CATEGORIES=	math kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Scientific calculator for KDE

LIB_DEPENDS=	libgmp.so:math/gmp \
		libmpfr.so:math/mpfr

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT4=	xml qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
