# $FreeBSD: head/x11-drivers/xf86-input-libinput/Makefile 487789 2018-12-19 09:09:11Z zeising $

PORTNAME=	xf86-input-libinput
PORTVERSION=	0.25.0
PORTREVISION=	3
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org libinput input driver

LICENSE=	MIT # various styles
LICENSE_FILE=	${WRKSRC}/COPYING

BUILD_DEPENDS=	${LOCALBASE}/include/linux/input.h:devel/evdev-proto
LIB_DEPENDS=	libinput.so:x11/libinput

XORG_CAT=	driver
USES=		pathfix

.include <bsd.port.mk>
