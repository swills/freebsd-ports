# $FreeBSD: head/graphics/kdegraphics-thumbnailers/Makefile 483125 2018-10-27 11:50:58Z tcberner $

PORTNAME=	kdegraphics-thumbnailers
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Thumbnailers for various graphics file formats

USES=		cmake:outsource compiler:c++11-lang kde:5 qt:5 tar:xz
USE_KDE=	completion config coreaddons ecm jobwidgets libkdcraw \
		libkexiv2 kio service widgetsaddons
USE_QT=		core gui network widgets \
		buildtools_build qmake_build

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
