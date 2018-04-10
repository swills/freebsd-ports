# $FreeBSD: head/devel/poxml/Makefile 466899 2018-04-09 19:19:41Z tcberner $

PORTNAME=	poxml
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Tools to translate Docbook XML using gettext

USES=		cmake:outsource gettext-tools:build,run kde:5 tar:xz
USE_KDE=	doctools ecm
USE_QT5=	core xml \
		buildtools_build qmake_build

.include <bsd.port.mk>
