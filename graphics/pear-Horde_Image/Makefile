# $FreeBSD: head/graphics/pear-Horde_Image/Makefile 444450 2017-06-27 10:02:04Z mm $

PORTNAME=	Horde_Image
PORTVERSION=	2.5.1
CATEGORIES=	graphics www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Image API

USES=	horde
USE_HORDE_RUN=	Horde_Exception \
		Horde_Support \
		Horde_Translation \
		Horde_Util

OPTIONS_DEFINE=	GD
GD_DESC=	Depend on PHP gd extension

GD_USE=	PHP=gd

.include <bsd.port.mk>
