# $FreeBSD: head/devel/lokalize/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	lokalize
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Computer-aided translation system

LIB_DEPENDS=	libhunspell-1.6.so:textproc/hunspell

USES=		cmake:outsource desktop-file-utils gettext kde:5 qt:5 tar:xz
USE_KDE=	auth bookmarks codecs completion config configwidgets \
		coreaddons crash dbusaddons doctools ecm i18n itemviews \
		jobwidgets kio kross notifications parts service solid sonnet \
		textwidgets widgetsaddons xmlgui
USE_QT=		core dbus gui network script sql widgets xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
