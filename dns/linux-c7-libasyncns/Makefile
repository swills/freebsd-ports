# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/dns/linux-c7-libasyncns/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	libasyncns
PORTVERSION=	0.8
PORTREVISION=	1
CATEGORIES=	dns devel linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Library for executing DNS queries (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	LGPL21+

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

RPMVERSION=	7.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
