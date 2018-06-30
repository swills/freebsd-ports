# $FreeBSD: head/graphics/libksane/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	libksane
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	SANE library interface for KDE

LIB_DEPENDS=	libsane.so:graphics/sane-backends

USES=		cmake:outsource gettext kde:5 qt:5 tar:xz
USE_KDE=	config ecm i18n sonnet textwidgets wallet widgetsaddons
USE_QT=		core gui testlib widgets \
		buildtools_build qmake_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
