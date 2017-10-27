# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/graphics/linux-c7-glx-utils/Makefile 452945 2017-10-26 19:23:18Z tijl $

PORTNAME=	glx-utils
PORTVERSION=	8.2.0
PORTREVISION=	4
CATEGORIES=	graphics linux
SRC_DISTFILES=	mesa-demos-${DISTVERSIONFULL}${SRC_SUFX}:SOURCE

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Mesa GLX utilities (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

RPMVERSION=	3.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	dri xorglibs
USE_LINUX_RPM=	nolib

.include <bsd.port.mk>
