# Created by: Artyom Mirgorodskiy <artyom.mirgorodsky@gmail.com>
# $FreeBSD: head/security/linux-c6-libssh2/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	libssh2
PORTVERSION=	1.4.2
PORTREVISION=	6
CATEGORIES=	security linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Library implementing the SSH2 protocol (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	2.el6_7.1
USES=		linux:c6
USE_LDCONFIG=	yes
USE_LINUX=	openssl
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
