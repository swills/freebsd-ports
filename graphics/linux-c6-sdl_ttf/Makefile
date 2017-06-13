# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/graphics/linux-c6-sdl_ttf/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	sdl_ttf
PORTVERSION=	2.0.11
PORTREVISION=	4
CATEGORIES=	graphics linux
MASTER_SITES=	EPEL
DISTNAME=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Simple library to load True Type Fonts as SDL interfaces (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
DOCSDIR=	${PREFIX}/usr/share/doc/${LINUXNAME}-${PORTVERSION}
LINUXNAME=	SDL_ttf
RPMVERSION=	6.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	jpeg png sdl12 tiff
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
