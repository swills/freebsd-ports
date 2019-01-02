# $FreeBSD: head/sysutils/plasma5-drkonqi/Makefile 488757 2018-12-31 06:38:42Z tcberner $

PORTNAME=	drkonqi
DISTVERSION=	${KDE_PLASMA_VERSION}
CATEGORIES=	sysutils kde kde-plasma

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Plasma5 crash handler

USES=		cmake compiler:c++11-lang kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons \
		 crash i18n idletime jobwidgets kio notifications \
		service wallet widgetsaddons xmlrpcclient
USE_QT=		concurrent core dbus gui network widgets x11extras xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
