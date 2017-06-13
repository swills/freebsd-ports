# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/multimedia/linux-c7-libtheora/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	libtheora
PORTVERSION=	1.1.1
PORTREVISION=	1
CATEGORIES=	multimedia linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Theora Video Compression Codec (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	BSD3CLAUSE

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	8.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
