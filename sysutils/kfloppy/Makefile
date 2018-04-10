# $FreeBSD: head/sysutils/kfloppy/Makefile 466902 2018-04-09 19:58:12Z tcberner $

PORTNAME=	kfloppy
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Floppy disk formatter for KDE

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons crash \
		doctools ecm emoticons i18n init itemmodels kdelibs4support \
		kio widgetsaddons xmlgui
USE_QT5=	core dbus gui widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
