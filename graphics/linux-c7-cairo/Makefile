# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/graphics/linux-c7-cairo/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	cairo
PORTVERSION=	1.14.2
PORTREVISION=	4
CATEGORIES=	graphics linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Vector graphics library Cairo (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	1.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	dri fontconfig pixman png xorglibs
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
