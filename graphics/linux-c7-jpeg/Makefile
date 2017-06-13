# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/graphics/linux-c7-jpeg/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	jpeg
PORTVERSION=	1.2.90
PORTREVISION=	2
CATEGORIES=	graphics linux
DISTNAME=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	SIMD-accelerated JPEG codec (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}-turbo/pkg-descr
DOCSDIR=	${PREFIX}/usr/share/doc/${LINUXNAME}-${PORTVERSION}
LINUXNAME=	libjpeg-turbo
RPMVERSION=	5.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
