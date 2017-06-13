# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/textproc/linux-c6-aspell/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	aspell
PORTVERSION=	0.60.6
PORTREVISION=	3
CATEGORIES=	textproc linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Spelling checker with better logic than ispell (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	LGPL21+

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	12.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

.include <bsd.port.mk>
