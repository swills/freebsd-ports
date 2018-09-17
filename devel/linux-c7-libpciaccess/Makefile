# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/devel/linux-c7-libpciaccess/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	libpciaccess
PORTVERSION=	0.13.4
PORTREVISION=	3
CATEGORIES=	devel

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Generic PCI access library (CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	3.1.el7_4
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
