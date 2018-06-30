# $FreeBSD: head/www/plasma5-plasma-browser-integration/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	plasma-browser-integration
DISTVERSION=	5.10.95.20181011
CATEGORIES=	www kde
PKGNAMEPREFIX=	plasma5- # this port is not yet using CATEGORIES=kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 components to integrate browsers into the desktop

USES=		cmake:outsource kde:5 qt:5
USE_KDE=	activities config coreaddons i18n kio notifications package \
		plasma-framework runner service windowsystem
USE_QT=		core dbus gui widgets \
		buildtools_build qmake_build
USE_GITHUB=	yes
GH_ACCOUNT=	KDE
GH_TAGNAME=	c593654

.include <bsd.port.mk>
