# $FreeBSD: head/graphics/kamera/Makefile 483125 2018-10-27 11:50:58Z tcberner $

PORTNAME=	kamera
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Digital camera manager for KDE

LIB_DEPENDS=	libgphoto2.so:graphics/libgphoto2

USES=		cmake:outsource compiler:c++11-lang gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons doctools ecm i18n \
		kio service widgetsaddons xmlgui
USE_QT=		core dbus gui widgets xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
