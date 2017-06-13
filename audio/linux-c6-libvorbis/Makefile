# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/audio/linux-c6-libvorbis/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	libvorbis
PORTVERSION=	1.2.3
PORTREVISION=	3
CATEGORIES=	audio linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Audio compression codec library (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	4.el6_2.1
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	libogg
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
