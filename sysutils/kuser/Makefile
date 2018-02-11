# $FreeBSD: head/sysutils/kuser/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	kuser
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	sysutils kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE user manager

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs pimlibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
