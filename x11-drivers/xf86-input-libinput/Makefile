# $FreeBSD: head/x11-drivers/xf86-input-libinput/Makefile 479538 2018-09-11 18:34:27Z zeising $

PORTNAME=	xf86-input-libinput
PORTVERSION=	0.25.0
PORTREVISION=	2
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org libinput input driver

LICENSE=	MIT # various styles
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libinput.so:x11/libinput

XORG_CAT=	driver
USES=		pathfix

.include <bsd.port.mk>
