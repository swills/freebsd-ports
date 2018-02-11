# $FreeBSD: head/misc/kwordquiz/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	kwordquiz
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	misc kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Flash card trainer for KDE 4

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs libkdeedu automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
