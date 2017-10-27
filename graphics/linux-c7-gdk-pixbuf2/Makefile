# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/graphics/linux-c7-gdk-pixbuf2/Makefile 452945 2017-10-26 19:23:18Z tijl $

PORTNAME=	gdk-pixbuf2
PORTVERSION=	2.36.5
CATEGORIES=	graphics linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Graphic library for GTK+ (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	1.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	jasper jpeg png tiff xorglibs
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

.include <bsd.port.mk>
