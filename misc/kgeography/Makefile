# $FreeBSD: head/misc/kgeography/Makefile 466828 2018-04-08 19:06:31Z tcberner $

PORTNAME=	kgeography
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	misc kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE geography trainer

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons crash doctools ecm \
		i18n iconthemes itemviews service widgetsaddons xmlgui
USE_QT5=	core dbus gui widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
