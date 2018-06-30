# Created by: Simon Barner <barner@gmx.de>
# $FreeBSD: head/devel/kcachegrind-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kcachegrind
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	4
CATEGORIES=	devel kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Profiler frontend for KDE

USES=		cmake:outsource kde:4 python:run qt:4 tar:xz shebangfix
USE_KDE=	kdelibs automoc4
USE_QT=		moc_build qmake_build rcc_build uic_build \
		corelib dbus gui
SHEBANG_FILES=	converters/op2calltree converters/dprof2calltree \
		converters/memprof2calltree \
		converters/hotshot2calltree.cmake

OPTIONS_DEFINE=	DOT VALGRIND

DOT_DESC=		Use GraphViz/dot to render call graphs
DOT_RUN_DEPENDS=	dot:graphics/graphviz

VALGRIND_DESC=		Install devel/valgrind
VALGRIND_RUN_DEPENDS=	valgrind:devel/valgrind

.include <bsd.port.mk>
