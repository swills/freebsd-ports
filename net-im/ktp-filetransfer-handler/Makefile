# $FreeBSD: head/net-im/ktp-filetransfer-handler/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	ktp-filetransfer-handler
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net-im kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE instant messaging file transfer handler

LIB_DEPENDS=	libtelepathy-qt5.so:net-im/telepathy-qt5 \
		libKTpCommonInternals.so:net-im/ktp-common-internals

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons ecm i18n itemviews jobwidgets kio service solid \
		wallet widgetsaddons xmlgui
USE_QT=		core dbus gui network xml widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
