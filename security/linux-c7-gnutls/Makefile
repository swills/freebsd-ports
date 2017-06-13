# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/security/linux-c7-gnutls/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	gnutls
PORTVERSION=	3.3.24
CATEGORIES=	security linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	GNU Transport Layer Security library (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	1.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	libtasn1 libgcrypt libgpg-error
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

.include <bsd.port.mk>
