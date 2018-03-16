# Created by: Danny Pansters <danny@ricin.com>
# $FreeBSD: head/x11-toolkits/py-qt4-gui/Makefile 464266 2018-03-12 18:06:51Z tcberner $

PORTNAME=	gui
PORTREVISION=	2
PORTEPOCH=	1
CATEGORIES=	x11-toolkits devel python

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Python bindings for the Qt4 toolkit, QtGui module

CONFIGURE_ARGS=	--enable QtGui
PYQT_DIST=	yes

USES=		python pyqt:4
USE_PYQT=	sip_build core_run
USE_PYTHON=	flavors
USE_QT4=	corelib gui imageformats_run inputmethods_run iconengines_run \
		moc_build qmake_build

OPTIONS_DEFINE=	API DEBUG
OPTIONS_DEFAULT=API
OPTIONS_SUB=	yes

API_DESC=		Install QtGui API for QScintilla2
API_CONFIGURE_ON=	--qsci-api --qsci-api-destdir=${QSCIDIR}
API_CONFIGURE_OFF=	--no-qsci-api
API_LIB_DEPENDS=	libqscintilla2_qt4.so:devel/qscintilla2
DEBUG_CONFIGURE_ON=	--debug --trace

BROKEN_sparc64=	Does not compile on sparc64

.include <bsd.port.mk>
