# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/graphics/linux-c7-gdk-pixbuf2/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	gdk-pixbuf2
PORTVERSION=	2.31.6
PORTREVISION=	2
CATEGORIES=	graphics linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Graphic library for GTK+ (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	3.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	jasper jpeg png tiff xorglibs
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

.include <bsd.port.mk>
