# $FreeBSD: head/games/kfourinline/Makefile 484573 2018-11-10 07:22:09Z tcberner $

PORTNAME=	kfourinline
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource compiler:c++11-lang gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons crash \
		dbusaddons dnssd ecm i18n iconthemes itemmodels itemviews \
		kdeclarative kdelibs4support kio libkdegames notifyconfig \
		widgetsaddons xmlgui
USE_QT=		core dbus declarative gui network svg widgets xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
