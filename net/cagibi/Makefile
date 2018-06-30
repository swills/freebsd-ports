# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD: head/net/cagibi/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	cagibi
PORTVERSION=	0.2.0
PORTREVISION=	1
CATEGORIES=	net devel
MASTER_SITES=	KDE/stable/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE SSDP/uPNP proxy

USES=		cmake kde:4 qt:4 tar:bzip2
USE_KDE=	automoc4
USE_QT=		corelib network xml dbus \
		qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
