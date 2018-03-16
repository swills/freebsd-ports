# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/security/linux-c7-libtasn1/Makefile 464668 2018-03-16 09:41:38Z jhale $

PORTNAME=	libtasn1
PORTVERSION=	4.10
CATEGORIES=	security linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	ASN.1 structure parser library (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	LGPL21+

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	1.el7
USES=		cpe linux:c7
CPE_VENDOR=	gnu
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
