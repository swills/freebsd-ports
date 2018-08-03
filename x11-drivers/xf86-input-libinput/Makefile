# $FreeBSD: head/x11-drivers/xf86-input-libinput/Makefile 476013 2018-07-31 18:41:30Z zeising $

PORTNAME=	xf86-input-libinput
PORTVERSION=	0.25.0
PORTREVISION=	1
CATEGORIES=	x11-drivers

MAINTAINER=	x11@FreeBSD.org
COMMENT=	X.Org libinput input driver

LICENSE=	MIT # various styles
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libinput.so:x11/libinput

XORG_CAT=	driver
USES=		pathfix

.include <bsd.port.mk>
