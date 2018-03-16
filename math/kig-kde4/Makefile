# $FreeBSD: head/math/kig-kde4/Makefile 464246 2018-03-12 11:10:47Z adridg $

PORTNAME=	kig
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	12
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
