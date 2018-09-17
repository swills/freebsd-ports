# Created by: Artyom Mirgorodskiy <artyom.mirgorodsky@gmail.com>
# $FreeBSD: head/graphics/linux-c6-cairo/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	cairo
PORTVERSION=	1.8.8
PORTREVISION=	8
CATEGORIES=	graphics linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Vector graphics library Cairo (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	6.el6_6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	fontconfig pixman png xorglibs
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
