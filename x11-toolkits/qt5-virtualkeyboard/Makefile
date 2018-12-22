# $FreeBSD: head/x11-toolkits/qt5-virtualkeyboard/Makefile 487594 2018-12-16 14:49:16Z tcberner $

PORTNAME=	virtualkeyboard
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	x11-toolkits
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt 5 Virtual Keyboard Module

LIB_DEPENDS=	libhunspell-1.6.so:textproc/hunspell

USES=		compiler:c++11-lang pkgconfig qmake qt-dist:5,virtualkeyboard
USE_QT=		core declarative network gui widgets svg buildtools_build

USE_LDCONFIG=	${PREFIX}/${QT_LIBDIR_REL}

# Disable the builtin layouts -- otherwise we need to pull in a lot of other
# stuff.
QMAKE_ARGS=	CONFIG+=disable-layouts

.include <bsd.port.mk>
