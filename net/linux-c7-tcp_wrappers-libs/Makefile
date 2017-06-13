# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/net/linux-c7-tcp_wrappers-libs/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	tcp_wrappers
PORTVERSION=	7.6
PORTREVISION=	2
CATEGORIES=	net linux
PKGNAMESUFFIX=	-libs
LIB_DISTNAMES=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Libraries tcp wrappers (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${LINUXNAME}-[0-9]*

DOCSDIR=	${PREFIX}/usr/share/doc/${LINUXNAME}-${PORTVERSION}
LINUXNAME=	${PORTNAME}${PKGNAMESUFFIX}
RPMVERSION=	77.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	xorglibs
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
