# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD: head/multimedia/py-qt4-multimedia/Makefile 415984 2016-05-28 12:32:21Z pi $

PORTNAME=	multimedia
CATEGORIES=	multimedia devel python

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Python bindings for the Qt4 toolkit, Multimedia module

CONFIGURE_ARGS=	--enable QtMultimedia
PYQT_DIST=	yes

USES=		python pyqt:4
USE_PYQT=	sip_build core_run gui_run
USE_QT4=	corelib gui multimedia moc_build qmake_build

OPTIONS_DEFINE=	API DEBUG
OPTIONS_DEFAULT=API
OPTIONS_SUB=	yes

API_DESC=		Install QtMultimedia API for QScintilla2
API_CONFIGURE_ON=	--qsci-api --qsci-api-destdir=${QSCIDIR}
API_CONFIGURE_OFF=	--no-qsci-api
API_LIB_DEPENDS=	libqscintilla2.so:devel/qscintilla2
DEBUG_CONFIGURE_ON=	--debug --trace

.include <bsd.port.mk>
