# Created by: Piotr Kubaj <emulation@FreeBSD.org$
# $FreeBSD: head/devel/linux-c7-libgfortran/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	libgfortran
PORTVERSION=	4.8.5
PORTREVISION=	1
CATEGORIES=	devel linux
SRC_DISTFILES=	gcc-${DISTVERSIONFULL}${SRC_SUFX}:SOURCE

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Runtime libraries for gfortran (Linux Centos ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

RPMVERSION=	11.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
