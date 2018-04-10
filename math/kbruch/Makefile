# $FreeBSD: head/math/kbruch/Makefile 466873 2018-04-09 18:13:24Z tcberner $

PORTNAME=	kbruch
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	math kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 application to exercise fractions

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	auth config crash codecs configwidgets coreaddons doctools ecm \
		i18n widgetsaddons xmlgui
USE_QT5=	core dbus gui xml widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
