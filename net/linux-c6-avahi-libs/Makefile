# Created by: lme
# $FreeBSD: head/net/linux-c6-avahi-libs/Makefile 460335 2018-01-29 20:42:12Z tijl $

PORTNAME=	avahi
PORTVERSION=	0.6.25
PORTREVISION=	5
CATEGORIES=	net linux
PKGNAMESUFFIX=	-libs
LIB_DISTNAMES=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Libraries for Avahi (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
LINUXNAME=	${PORTNAME}${PKGNAMESUFFIX}
RPMVERSION=	17.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
