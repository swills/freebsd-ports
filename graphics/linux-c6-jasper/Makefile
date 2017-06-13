# $FreeBSD: head/graphics/linux-c6-jasper/Makefile 441913 2017-05-28 16:23:39Z tijl $

PORTNAME=	jasper
PORTVERSION=	1.900.1
PORTREVISION=	4
CATEGORIES=	graphics linux
PKGNAMESUFFIX=	-libs
LIB_DISTNAMES=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	JPEG-2000 reference implementation (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
LINUXNAME=	${PORTNAME}${PKGNAMESUFFIX}
RPMVERSION=	21.el6_9
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	jpeg
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
