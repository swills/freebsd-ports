# Created by: Dima Panov <fluffy@FreeBSD.org>
# $FreeBSD: head/net/kio-upnp-ms/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	kio-upnp-ms
DISTVERSION=	1.0.0.git20110808
PORTREVISION=	8
CATEGORIES=	net devel
#MASTER_SITES=	KDE/stable/${PORTNAME}/${PORTVERSION}/src
MASTER_SITES=	LOCAL/fluffy

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KIO slave to access UPnP MediaServers

LIB_DEPENDS=	libHUpnp.so:net/hupnp

USES=		cmake kde:4 qt:4 tar:bzip2
USE_KDE=	automoc4 kdelibs
USE_QT=		corelib network xml dbus gui \
		qmake_build moc_build rcc_build uic_build

WRKSRC=		${WRKDIR}/${DISTNAME:C/.[^.]*$//}

PLIST_FILES=	include/kde4/kio/upnp-ms-types.h \
		lib/kde4/kio_upnp_ms.so \
		share/kde4/services/kio_upnp_ms.protocol

.include <bsd.port.mk>
