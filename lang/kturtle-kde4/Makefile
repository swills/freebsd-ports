# $FreeBSD: head/lang/kturtle-kde4/Makefile 478480 2018-08-30 18:23:24Z adridg $

PORTNAME=	kturtle
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	lang kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Educational programming environment for KDE 4

DEPRECATED=	KDE4 is EOL upstream
EXPIRATION_DATE=	2018-12-31

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		corelib gui xml moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
