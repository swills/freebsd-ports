# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/audio/linux-c6-libaudiofile/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	audiofile
PORTVERSION=	0.2.6
PORTREVISION=	3
CATEGORIES=	audio linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Implementation of the Audio File Library from SGI (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../lib${PORTNAME}/pkg-descr
RPMVERSION=	11.1.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
