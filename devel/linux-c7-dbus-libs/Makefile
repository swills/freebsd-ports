# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/devel/linux-c7-dbus-libs/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	dbus
PORTVERSION=	1.6.12
PORTREVISION=	2
CATEGORIES=	devel linux
PKGNAMESUFFIX=	-libs
LIB_DISTNAMES=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Libraries for accessing D-BUS (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	GPLv2+

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
DOCSDIR=	${PREFIX}/usr/share/doc/${LINUXNAME}-${PORTVERSION}
LINUXNAME=	${PORTNAME}${PKGNAMESUFFIX}
RPMVERSION=	17.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
