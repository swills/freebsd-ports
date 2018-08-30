# $FreeBSD: head/net/kpimtextedit/Makefile 478003 2018-08-25 05:15:02Z tcberner $

PORTNAME=	kpimtextedit
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	net kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE library for PIM-specific text editing utilities

LICENSE=	LGPL21

USES=		cmake:outsource compiler:c++11-lib gettext grantlee:5 kde:5 qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons ecm \
		emoticons i18n iconthemes init itemmodels itemviews jobwidgets \
		kdelibs4support kio service sonnet syntaxhighlighting textwidgets \
		widgetsaddons xmlgui
USE_QT=		core dbus gui network speech widgets xml \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

DESCR=		${.CURDIR:H:H}/deskutils/kdepim/pkg-descr


.include <bsd.port.mk>
