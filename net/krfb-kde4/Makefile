# $FreeBSD: head/net/krfb-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	krfb
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	net kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	VNC server for KDE

LIB_DEPENDS=	libtelepathy-qt4.so:net-im/telepathy-qt4

USES=		alias cmake:outsource jpeg kde:4 qt:4 tar:xz
USE_KDE=	kdelibs automoc4
USE_QT=		corelib gui network \
		moc_build qmake_build rcc_build uic_build

.include <bsd.port.mk>
