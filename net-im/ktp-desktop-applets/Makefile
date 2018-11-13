# $FreeBSD: head/net-im/ktp-desktop-applets/Makefile 484140 2018-11-04 19:00:53Z tcberner $

PORTNAME=	ktp-desktop-applets
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging plasma widgets

LIB_DEPENDS=	libKTpCommonInternals.so:net-im/ktp-common-internals

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	ecm plasma-framework windowsystem
USE_QT=		core dbus declarative gui network widgets \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
