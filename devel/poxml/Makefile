# $FreeBSD: head/devel/poxml/Makefile 482577 2018-10-20 15:56:08Z tcberner $

PORTNAME=	poxml
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	devel kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Tools to translate Docbook XML using gettext

USES=		cmake:outsource compiler:c++11-lang gettext-tools:build,run \
		kde:5 qt:5 tar:xz
USE_KDE=	doctools ecm
USE_QT=		core xml \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
