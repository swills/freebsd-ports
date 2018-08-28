# Created by: Artyom Mirgorodskiy <artyom.mirgorodsky@gmail.com>
# $FreeBSD: head/devel/linux-c6-dbus-libs/Makefile 478165 2018-08-26 19:53:54Z pi $

PORTNAME=	dbus
PORTVERSION=	1.2.24
PORTREVISION=	7
CATEGORIES=	devel linux
PKGNAMESUFFIX=	-libs
LIB_DISTNAMES=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Libraries for accessing D-BUS (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
LINUXNAME=	${PORTNAME}${PKGNAMESUFFIX}
RPMVERSION=	9.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
