# Created by: Michael Johnson <ahze@FreeBSD.org
# $FreeBSD: head/net/avahi-qt4/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTREVISION=	2
CATEGORIES=	net
PKGNAMESUFFIX=	-qt4

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Qt 4 bindings to the Avahi mDNS system

LIB_DEPENDS=	libavahi-common.so:net/avahi-app

MASTERDIR=	${.CURDIR}/../avahi-app
BUILD_WRKSRC=	${WRKSRC}/avahi-qt
INSTALL_WRKSRC=	${BUILD_WRKSRC}
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

AVAHI_SLAVE=	qt4
USES=	qt:4
USE_QT=		corelib moc_build
AVAHI_PKGCONFIG=	avahi-qt4.pc

.include "${MASTERDIR}/Makefile"
