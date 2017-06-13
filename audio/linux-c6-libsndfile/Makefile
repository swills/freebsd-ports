# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/audio/linux-c6-libsndfile/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	libsndfile
PORTVERSION=	1.0.20
PORTREVISION=	4
CATEGORIES=	audio linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Reading and writing files containing sampled sound (like WAV or AIFF) (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	5.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	flac libogg libvorbis
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
