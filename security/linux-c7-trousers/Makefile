# $FreeBSD: head/security/linux-c7-trousers/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	trousers
PORTVERSION=	0.3.14
CATEGORIES=	security linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Open-source TCG Software Stack (Linux CentOS ${LINUX_DIST_VER})

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	2.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	openssl
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
