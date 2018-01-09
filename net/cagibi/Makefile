# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD: head/net/cagibi/Makefile 458285 2018-01-06 18:39:20Z tcberner $

PORTNAME=	cagibi
PORTVERSION=	0.2.0
PORTREVISION=	1
CATEGORIES=	net devel
MASTER_SITES=	KDE/stable/${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KDE SSDP/uPNP proxy

USES=		cmake kde:4 tar:bzip2
USE_KDE=	automoc4
USE_QT4=	corelib network xml dbus \
		qmake_build moc_build rcc_build uic_build

.include <bsd.port.mk>
