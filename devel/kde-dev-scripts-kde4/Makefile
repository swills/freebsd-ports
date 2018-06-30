# $FreeBSD: head/devel/kde-dev-scripts-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kde-dev-scripts
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	4
CATEGORIES=	devel kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE development scripts

USES=		cmake:outsource kde:4 python:run qt:4 shebangfix tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build

SHEBANG_FILES=	cxxmetric \
		draw_lib_dependencies \
		fixkdeincludes \
		fixuifiles \
		kde-systemsettings-tree.py \
		kde_generate_export_header \
		kdelnk2desktop.py \
		krazy-licensecheck \
		png2mng.pl \
		reviewboard-am \
		svnintegrate \
		zonetab2pot.py

.include <bsd.port.mk>
