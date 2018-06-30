# $FreeBSD: head/devel/kf5-ktexteditor/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	ktexteditor
DISTVERSION=	${KDE_FRAMEWORKS_VERSION}
CATEGORIES=	devel kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 advanced embeddable text editor

LIB_DEPENDS=	libgit2.so:devel/libgit2

USES=		cmake:outsource compiler:c++11-lib gettext kde:5 pkgconfig qt:5 tar:xz
USE_KDE=	archive auth codecs completion config configwidgets \
		coreaddons ecm guiaddons i18n iconthemes itemviews \
		jobwidgets kio parts service sonnet syntaxhighlighting \
		textwidgets widgetsaddons xmlgui
USE_QT=		buildtools_build core dbus gui network printsupport \
		qmake_build script widgets xml xmlpatterns

.include <bsd.port.mk>
