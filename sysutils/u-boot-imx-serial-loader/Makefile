# Created by: Ian Lepore <ian@FreeBSD.org>
# $FreeBSD: head/sysutils/u-boot-imx-serial-loader/Makefile 444322 2017-06-25 20:02:56Z linimon $

PORTNAME=	u-boot-imx-serial-loader
PORTVERSION=	2017.01
CATEGORIES=	sysutils

MAINTAINER=	ian@FreeBSD.org
COMMENT=	Load u-boot via USB or UART on i.MX5, i.MX6, i.MX7, and Vybrid

LICENSE=	LGPL21

USE_GITHUB=	yes
GH_ACCOUNT=	boundarydevices
GH_PROJECT=	imx_usb_loader
GH_TAGNAME=	ba6b31c

USES=		gmake pkgconfig

MAKE_ARGS+=	prefix=${PREFIX}

.include <bsd.port.mk>
