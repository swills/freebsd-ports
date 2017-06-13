# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/devel/linux-c7-nspr/Makefile 435795 2017-03-09 19:18:39Z tijl $

PORTNAME=	nspr
PORTVERSION=	4.13.1
CATEGORIES=	devel linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Netscape Portable Runtime (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	1.0.el7_3
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
