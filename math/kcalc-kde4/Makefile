# $FreeBSD: head/math/kcalc-kde4/Makefile 478480 2018-08-30 18:23:24Z adridg $

PORTNAME=	kcalc
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	4
CATEGORIES=	math kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Scientific calculator for KDE

DEPRECATED=	KDE4 is EOL upstream
EXPIRATION_DATE=	2018-12-31

LIB_DEPENDS=	libgmp.so:math/gmp \
		libmpfr.so:math/mpfr

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT=		xml qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
