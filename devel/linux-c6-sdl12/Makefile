# Created by: Johannes Meixner <johannes@perceivon.net
# $FreeBSD: head/devel/linux-c6-sdl12/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	sdl
PORTVERSION=	1.2.14
PORTREVISION=	4
CATEGORIES=	devel linux
DISTNAME=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Cross-platform multi-media development API (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}12/pkg-descr
DOCSDIR=	${PREFIX}/usr/share/doc/${LINUXNAME}-${PORTVERSION}
LINUXNAME=	SDL
RPMVERSION=	7.el6_7.1
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	xorglibs
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
