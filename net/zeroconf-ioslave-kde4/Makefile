# $FreeBSD: head/net/zeroconf-ioslave-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	zeroconf-ioslave
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	net kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Network monitor for DNS-SD services (Zeroconf)

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
