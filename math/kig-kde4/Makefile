# $FreeBSD: head/math/kig-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kig
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	13
CATEGORIES=	math kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 interactive geometry application

LIB_DEPENDS=	${PY_BOOST}

USES=		cmake:outsource compiler:c++11-lib kde:4 python:2.7,run \
		qt:4 shebangfix tar:xz
USE_KDE=	kdelibs soprano automoc4
USE_QT=		corelib dbus gui network svg xml \
		moc_build qmake_build rcc_build uic_build

SHEBANG_FILES=	pykig/pykig.py

.include <bsd.port.mk>
