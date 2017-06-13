# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/lang/linux-c6-tcl85/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	tcl
PORTVERSION=	8.5.7
PORTREVISION=	2
CATEGORIES=	lang linux
PKGNAMESUFFIX=	85

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Tool Command Language (Linux CentOS ${LINUX_DIST_VER})

DATADIR=	${PREFIX}/usr/share/tcl${PORTVERSION:R}
DESCR=		${.CURDIR}/../${PORTNAME}${PKGNAMESUFFIX}/pkg-descr
RPMVERSION=	6.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes
USE_LINUX_RPM_BAD_PERMS=	yes

.include <bsd.port.mk>
