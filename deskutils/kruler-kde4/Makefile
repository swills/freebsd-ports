# $FreeBSD: head/deskutils/kruler-kde4/Makefile 478462 2018-08-30 14:34:04Z adridg $

PORTNAME=	kruler
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	deskutils kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 screen ruler

DEPRECATED=	KDE4 is EOL upstream
EXPIRATION_DATE=	2018-12-31

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build
USE_XORG=	x11

.include <bsd.port.mk>
