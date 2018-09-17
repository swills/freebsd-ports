# $FreeBSD: head/x11-toolkits/qt5-virtualkeyboard/Makefile 479286 2018-09-09 11:12:14Z tcberner $

PORTNAME=	virtualkeyboard
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 Virtual Keyboard Module

LIB_DEPENDS=	libhunspell-1.6.so:textproc/hunspell

USES=		qmake qt-dist:5,virtualkeyboard
USE_QT=		core network gui widgets svg qml quick buildtools_build

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

# Disable the builtin layouts -- otherwise we need to pull in a lot of other
# stuff.
QMAKE_ARGS=	CONFIG+=disable-layouts

.include <bsd.port.mk>
