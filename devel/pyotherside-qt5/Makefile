# $FreeBSD: head/devel/pyotherside-qt5/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTNAME=	pyotherside
DISTVERSION=	1.5.3
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMESUFFIX=	-qt5

MAINTAINER=	daniel@shafer.cc
COMMENT=	Asynchronous Python 3 Bindings for Qt 5

LICENSE=	ISCL
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		compiler:c++11-lang gettext-runtime gl python:3.4+ qmake qt:5
USE_QT=		core declarative gui network quickcontrols svg testlib \
		widgets buildtools_build
USE_GL=		gl

USE_GITHUB=	yes
GH_ACCOUNT=	thp

QMAKE_ARGS=	PYTHON_CONFIG=${PYTHON_CMD}-config

.include <bsd.port.mk>
