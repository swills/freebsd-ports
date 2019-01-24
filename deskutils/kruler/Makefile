# $FreeBSD: head/deskutils/kruler/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	kruler
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE screen ruler

USES=		cmake compiler:c++11-lang gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons ecm doctools i18n \
		notifications widgetsaddons windowsystem xmlgui
USE_QT=		core dbus gui widgets x11extras xml \
		buildtools_build qmake_build
USE_XORG=	x11 xcb

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
