# $FreeBSD: head/devel/kde-dev-utils-kde4/Makefile 462619 2018-02-22 19:03:17Z tcberner $

PORTNAME=	kde-dev-utils
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	4
CATEGORIES=	devel kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE development utilities

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build \
		corelib designer gui qt3support xml

.include <bsd.port.mk>
