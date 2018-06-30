# $FreeBSD: head/comms/kremotecontrol-kde4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kremotecontrol
PORTVERSION=	${KDE4_VERSION}
PORTREVISION=	3
CATEGORIES=	comms kde kde-kde4

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE frontend for your remote controls

RUN_DEPENDS=	lircd:comms/lirc

USES=		cmake:outsource kde:4 qt:4 tar:xz
USE_KDE=	automoc4 kdelibs
USE_QT=		corelib script xmlpatterns \
		qmake_build moc_build rcc_build uic_build
USE_LDCONFIG=	yes

.include <bsd.port.mk>
