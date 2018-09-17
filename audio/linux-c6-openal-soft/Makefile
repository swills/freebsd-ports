# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/audio/linux-c6-openal-soft/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	openal-soft
PORTVERSION=	1.12.854
PORTREVISION=	5
CATEGORIES=	audio linux
MASTER_SITES=	EPEL/o

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	3D positional spatialized sound library (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	1.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	alsalib
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
