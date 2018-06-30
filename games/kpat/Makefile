# $FreeBSD: head/games/kpat/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kpat
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
PORTREVISION=	1
CATEGORIES=	games kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 qt:5 shared-mime-info tar:xz
USE_KDE=	attica auth codecs completion config configwidgets coreaddons \
		crash dbusaddons ecm guiaddons i18n iconthemes itemviews \
		kdeclarative kio libkdegames newstuff notifyconfig service \
		textwidgets widgetsaddons xmlgui
USE_QT=		core dbus gui network phonon4 qml quick svg widgets xml \
		buildtools_build qmake_build

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
