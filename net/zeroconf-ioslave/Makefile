# $FreeBSD: head/net/zeroconf-ioslave/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	zeroconf-ioslave
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Network monitor for DNS-SD services (Zeroconf)

USES=		cmake:outsource kde:5 qt:5 tar:xz
USE_KDE=	config coreaddons dbusaddons dnssd i18n kio service
USE_QT=		core dbus network \
		buildtools_build qmake_build

.include <bsd.port.mk>
