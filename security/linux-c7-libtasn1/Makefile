# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/security/linux-c7-libtasn1/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	libtasn1
PORTVERSION=	3.8
PORTREVISION=	1
CATEGORIES=	security linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	ASN.1 structure parser library (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	LGPL21+

CONFLICT=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	3.el7
USES=		cpe linux:c7
CPE_VENDOR=	gnu
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
