# $FreeBSD: head/games/katomic/Makefile 466814 2018-04-08 18:09:23Z tcberner $

PORTNAME=	katomic
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	games kde kde-applications
MAINTAINER=	kde@FreeBSD.org
COMMENT=	${${PORTNAME}_DESC}

USES=		cmake:outsource gettext kde:5 shebangfix tar:xz
USE_KDE=	attica auth codecs config configwidgets coreaddons crash \
		dbusaddons ecm guiaddons i18n iconthemes itemviews kio \
		libkdegames newstuff notifyconfig service widgetsaddons xmlgui
USE_QT5=	core dbus gui network qml quick widgets xml \
		buildtools_build qmake_build
SHEBANG_FILES=	katomic-levelset-upd.pl

.include <${.CURDIR}/../kdegames/Makefile.common>
.include <bsd.port.mk>
