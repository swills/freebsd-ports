# $FreeBSD: head/math/kalgebra-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kalgebra
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	4
CATEGORIES=	math kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE graph calculator

LIB_DEPENDS=	libanalitza.so:math/analitza-kde4

CMAKE_ARGS=	-DBUILD_mobile:BOOL=FALSE

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_GL=		glu
USE_KDE=	kdelibs libkeduvocdocument automoc4
USE_QT=		corelib declarative gui opengl \
		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
