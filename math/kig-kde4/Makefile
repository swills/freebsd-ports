# $FreeBSD: head/math/kig-kde4/Makefile 467711 2018-04-18 13:57:42Z jbeich $

PORTNAME=	kig
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	13
CATEGORIES=	math kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 interactive geometry application

LIB_DEPENDS=	${PY_BOOST}

USES=		cmake:outsource compiler:c++11-lib kde:4 python:run \
		shebangfix tar:xz
USE_KDE=	kdelibs soprano automoc4
USE_QT4=	corelib dbus gui network svg xml \
		moc_build qmake_build rcc_build uic_build

SHEBANG_FILES=	pykig/pykig.py

.include <bsd.port.mk>
