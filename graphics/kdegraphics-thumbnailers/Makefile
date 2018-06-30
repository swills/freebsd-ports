# $FreeBSD: head/graphics/kdegraphics-thumbnailers/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kdegraphics-thumbnailers
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Thumbnailers for various graphics file formats

USES=		cmake:outsource kde:5 qt:5 tar:xz
USE_KDE=	completion config coreaddons ecm jobwidgets libkdcraw \
		libkexiv2 kio service widgetsaddons
USE_QT=		core gui network widgets \
		buildtools_build qmake_build

.include <bsd.port.mk>
