# $FreeBSD: head/accessibility/kmag/Makefile 484573 2018-11-10 07:22:09Z tcberner $

PORTNAME=	kmag
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	accessibility kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE Screen magnifier

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		cmake:outsource compiler:c++11-lang gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons ecm \
		i18n kio service widgetsaddons xmlgui
USE_QT=		core dbus gui printsupport widgets xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
