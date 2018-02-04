# Created by: David Naylor <dbn@FreeBSD.org>
# $FreeBSD: head/devel/linux-c7-libunwind/Makefile 460526 2018-01-31 20:10:29Z tijl $

PORTNAME=	libunwind
PORTVERSION=	1.2
CATEGORIES=	devel linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Generic stack unwinding library (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	2.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
