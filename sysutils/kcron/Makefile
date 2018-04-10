# $FreeBSD: head/sysutils/kcron/Makefile 466902 2018-04-09 19:58:12Z tcberner $

PORTNAME=	kcron
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	sysutils kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE task scheduler

BUILD_DEPENDS=	${LOCALBASE}/share/xsl/docbook/html/docbook.xsl:textproc/docbook-xsl \
		docbook-xml>0:textproc/docbook-xml

USES=		cmake:outsource gettext kde:5 tar:xz
USE_KDE=	auth codecs completion config configwidgets coreaddons ecm \
		doctools i18n iconthemes jobwidgets kio service widgetsaddons \
		xmlgui
USE_QT5=	core gui network printsupport widgets xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
