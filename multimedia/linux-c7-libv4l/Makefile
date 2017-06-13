# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/multimedia/linux-c7-libv4l/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	libv4l
PORTVERSION=	0.9.5
PORTREVISION=	2
CATEGORIES=	multimedia linux
SRC_DISTFILES=	v4l-utils-${DISTVERSIONFULL}${SRC_SUFX}:SOURCE

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Video4Linux library (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	LGPL20+

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	4.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
