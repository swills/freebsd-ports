# $FreeBSD: head/net/zeroconf-ioslave/Makefile 461375 2018-02-10 10:29:51Z tcberner $

PORTNAME=	zeroconf-ioslave
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	2
CATEGORIES=	net kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Network monitor for DNS-SD services (Zeroconf)

USES=		cmake:outsource kde:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
