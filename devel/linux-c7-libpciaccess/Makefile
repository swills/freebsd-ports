# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/devel/linux-c7-libpciaccess/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	libpciaccess
PORTVERSION=	0.13.4
PORTREVISION=	2
CATEGORIES=	devel

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Generic PCI access library (CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	3.el7_3
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
