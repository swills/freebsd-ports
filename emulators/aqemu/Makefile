# $FreeBSD: head/emulators/aqemu/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	aqemu
DISTVERSIONPREFIX=	v
DISTVERSION=	0.9.2
CATEGORIES=	emulators

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Qt5 based QEMU frontend

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libvncclient.so:net/libvncserver

USES=		cmake:noninja qt:5
USE_QT=		buildtools_build linguisttools_build qmake_build \
		core dbus gui network printsupport testlib widgets

USE_GITHUB=	yes
GH_ACCOUNT=	tobimensch

.include <bsd.port.mk>
