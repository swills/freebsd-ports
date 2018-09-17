# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/devel/linux-c7-libsigc++20/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	libsigc++20
PORTVERSION=	2.10.0
CATEGORIES=	devel linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Callback Framework for C++ (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	1.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
