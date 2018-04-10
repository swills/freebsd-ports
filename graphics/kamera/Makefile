# $FreeBSD: head/graphics/kamera/Makefile 466806 2018-04-08 17:01:54Z tcberner $

PORTNAME=	kamera
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Digital camera manager for KDE

LIB_DEPENDS=	libgphoto2.so:graphics/libgphoto2

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons doctools ecm i18n \
		kio service widgetsaddons xmlgui
USE_QT5=	core dbus gui widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
