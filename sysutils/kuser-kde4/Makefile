# $FreeBSD: head/sysutils/kuser-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kuser
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	4
CATEGORIES=	sysutils kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE user manager

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs pimlibs automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
