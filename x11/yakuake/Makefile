# $FreeBSD: head/x11/yakuake/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	yakuake
DISTVERSION=	3.0.5
CATEGORIES=	x11 kde
MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}/src
DIST_SUBDIR=	KDE/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Drop-down terminal emulator for KDE

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

RUN_DEPENDS=	konsole:x11/konsole

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	attica auth archive codecs completion config configwidgets \
		coreaddons crash dbusaddons ecm globalaccel i18n iconthemes \
		jobwidgets kio newstuff notifications notifyconfig parts \
		service sonnet textwidgets widgetsaddons windowsystem xmlgui
USE_QT=		core dbus gui network widgets x11extras xml \
		buildtools_build qmake_build
USE_XORG=	x11

.include <bsd.port.mk>
