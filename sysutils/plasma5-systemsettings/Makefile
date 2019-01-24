# $FreeBSD: head/sysutils/plasma5-systemsettings/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	systemsettings
DISTVERSION=	${KDE_PLASMA_VERSION}
PORTREVISION=	1
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 system settings

USES=		cmake compiler:c++11-lib cpe gettext kde:5 qt:5 tar:xz
USE_KDE=	activities activities-stats auth codecs completion config \
		configwidgets coreaddons crash dbusaddons doctools ecm i18n \
		iconthemes itemviews jobwidgets js kcmutils kdeclarative khtml \
		kio kirigami2 package parts plasma-workspace service sonnet textwidgets \
		widgetsaddons windowsystem xmlgui
USE_QT=		concurrent core dbus declarative gui network widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
