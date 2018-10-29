# $FreeBSD: head/math/kcalc/Makefile 483125 2018-10-27 11:50:58Z tcberner $

PORTNAME=	kcalc
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	math kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Scientific calculator for KDE

LIB_DEPENDS=	libgmp.so:math/gmp \
		libmpfr.so:math/mpfr
BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource compiler:c++11-lang gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs coreaddons ecm config configwidgets doctools \
		guiaddons i18n init notifications widgetsaddons xmlgui
USE_QT=		core dbus gui widgets xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
