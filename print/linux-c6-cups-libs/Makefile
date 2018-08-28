# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/print/linux-c6-cups-libs/Makefile 478165 2018-08-26 19:53:54Z pi $

PORTNAME=	cups
PORTVERSION=	1.4.2
PORTREVISION=	9
CATEGORIES=	print linux
PKGNAMESUFFIX=	-libs
LIB_DISTNAMES=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Common UNIX Printing System libraries

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
LINUXNAME=	${PORTNAME}${PKGNAMESUFFIX}
RPMVERSION=	79.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	avahi-libs gnutls jpeg png tiff
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
