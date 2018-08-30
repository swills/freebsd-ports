# $FreeBSD: head/deskutils/kcharselect/Makefile 478003 2018-08-25 05:15:02Z tcberner $

PORTNAME=	kcharselect
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	deskutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Character selector for KDE

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	auth codecs config configwidgets coreaddons crash  ecm bookmarks \
		doctools i18n widgetsaddons xmlgui
USE_QT=		core dbus gui widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
