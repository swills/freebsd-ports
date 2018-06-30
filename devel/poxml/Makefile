# $FreeBSD: head/devel/poxml/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	poxml
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Tools to translate Docbook XML using gettext

USES=		cmake:outsource gettext-tools:build,run kde:5 qt:5 tar:xz
USE_KDE=	doctools ecm
USE_QT=		core xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
