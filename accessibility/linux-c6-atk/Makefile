# Created by: Artyom Mirgorodskiy <artyom.mirgorodsky@gmail.com>
# $FreeBSD: head/accessibility/linux-c6-atk/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	atk
PORTVERSION=	1.30.0
PORTREVISION=	2
CATEGORIES=	accessibility linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Accessibility Toolkit (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	GPLv3

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	1.el6
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

.include <bsd.port.mk>
