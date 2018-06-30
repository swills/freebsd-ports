# $FreeBSD: head/graphics/kdegraphics-mobipocket/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kdegraphics-mobipocket
DISTVERSION=	${KDE_APPLICATIONS_VERSION}
CATEGORIES=	graphics kde kde-applications

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Mobipocket plugins for Strigi indexing and thumbnails

USES=		cmake:outsource kde:5 qt:5 tar:xz
USE_KDE=	completion config coreaddons ecm jobwidgets kio service \
		widgetsaddons
USE_QT=		core gui network widgets \
		buildtools_build qmake_build

USE_LDCONFIG=	yes

.include <bsd.port.mk>
