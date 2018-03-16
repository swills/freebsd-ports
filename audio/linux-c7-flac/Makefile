# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/audio/linux-c7-flac/Makefile 464668 2018-03-16 09:41:38Z jhale $

PORTNAME=	flac
PORTVERSION=	1.3.0
PORTREVISION=	2
CATEGORIES=	audio linux
PKGNAMESUFFIX=	-libs
LIB_DISTNAMES=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Free lossless audio codec (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
DOCSDIR=	${PREFIX}/usr/share/doc/${LINUXNAME}-${PORTVERSION}
LINUXNAME=	${PORTNAME}${PKGNAMESUFFIX}
RPMVERSION=	5.el7_1
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	libogg
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
