# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/audio/linux-c6-mikmod/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	libmikmod
PORTVERSION=	3.2.0
PORTREVISION=	4
CATEGORIES=	audio linux
MASTER_SITES=	EPEL/l

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	MikMod Sound Library (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	10.beta2.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
