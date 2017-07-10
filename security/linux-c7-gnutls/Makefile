# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/security/linux-c7-gnutls/Makefile 445245 2017-07-07 12:33:35Z tijl $

PORTNAME=	gnutls
PORTVERSION=	3.3.24
PORTREVISION=	1
CATEGORIES=	security linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	GNU Transport Layer Security library (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	1.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	libtasn1 nettle p11-kit trousers
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

.include <bsd.port.mk>
