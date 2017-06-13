# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/audio/linux-c6-pulseaudio-utils/Makefile 441768 2017-05-26 10:26:39Z tijl $

PORTNAME=	pulseaudio
PORTVERSION=	0.9.21
PORTREVISION=	6
CATEGORIES=	audio linux
PKGNAMESUFFIX=	-utils
LIB_DISTNAMES=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Utils for PulseAudio clients (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
LINUXNAME=	${PORTNAME}${PKGNAMESUFFIX}
RPMVERSION=	26.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	xorglibs pulseaudio-libs
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
