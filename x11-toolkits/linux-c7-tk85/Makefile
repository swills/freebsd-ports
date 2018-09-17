# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/x11-toolkits/linux-c7-tk85/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	tk
PORTVERSION=	8.5.13
PORTREVISION=	1
CATEGORIES=	x11-toolkits linux
PKGNAMESUFFIX=	85

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Graphical toolkit for TCL (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}${PKGNAMESUFFIX}-[0-9]*

DATADIR=	${PREFIX}/usr/share/tk${PORTVERSION:R}
DESCR=		${.CURDIR}/../${PORTNAME}${PKGNAMESUFFIX}/pkg-descr
RPMVERSION=	6.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	xorglibs
USE_LINUX_RPM=	yes
USE_LINUX_RPM_BAD_PERMS=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
