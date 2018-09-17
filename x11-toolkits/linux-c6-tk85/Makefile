# Created by: bsam
# $FreeBSD: head/x11-toolkits/linux-c6-tk85/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	tk
PORTVERSION=	8.5.7
PORTREVISION=	3
CATEGORIES=	x11-toolkits linux
PKGNAMESUFFIX=	85

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Graphical toolkit for TCL (Linux CentOS ${LINUX_DIST_VER})

DATADIR=	${PREFIX}/usr/share/tk${PORTVERSION:R}
DESCR=		${.CURDIR}/../${PORTNAME}${PKGNAMESUFFIX}/pkg-descr
RPMVERSION=	5.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	xorglibs
USE_LINUX_RPM=	yes
USE_LINUX_RPM_BAD_PERMS=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
