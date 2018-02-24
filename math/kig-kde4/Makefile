# $FreeBSD: head/math/kig-kde4/Makefile 462619 2018-02-22 19:03:17Z tcberner $

PORTNAME=	kig
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	11
CATEGORIES=	math kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE 4 interactive geometry application

LIB_DEPENDS=	${PY_BOOST}

USES=		cmake:outsource compiler:c++11-lib kde:4 python:run \
		shebangfix tar:xz
USE_KDE=	kdelibs automoc4
USE_QT4=	gui xml moc_build qmake_build rcc_build uic_build

SHEBANG_FILES=	pykig/pykig.py

.include <bsd.port.mk>
