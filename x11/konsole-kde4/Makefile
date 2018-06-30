# $FreeBSD: head/x11/konsole-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	konsole
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	5
CATEGORIES=	x11 kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE terminal emulator

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	automoc4 libkonq
USE_QT=		xml moc_build qmake_build rcc_build uic_build
USE_XORG=	x11 xrender
CMAKE_ARGS+=	-DCMAKE_REQUIRED_FLAGS:STRING="-L${LOCALBASE}/lib"

.include <bsd.port.mk>
