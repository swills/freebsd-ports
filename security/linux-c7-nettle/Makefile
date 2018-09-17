# $FreeBSD: head/security/linux-c7-nettle/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	nettle
PORTVERSION=	2.7.1
CATEGORIES=	security linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Low-level cryptographic library (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	8.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
