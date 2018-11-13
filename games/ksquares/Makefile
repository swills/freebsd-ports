# $FreeBSD: head/games/ksquares/Makefile 484573 2018-11-10 07:22:09Z tcberner $

PORTNAME=	ksquares
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource compiler:c++11-lang gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons crash \
		dbusaddons ecm guiaddons i18n iconthemes itemviews kio \
		libkdegames notifyconfig widgetsaddons xmlgui
USE_QT=		core dbus declarative gui network widgets xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
