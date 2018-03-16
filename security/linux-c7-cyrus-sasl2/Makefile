# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/security/linux-c7-cyrus-sasl2/Makefile 464668 2018-03-16 09:41:38Z jhale $

PORTNAME=	cyrus-sasl
PORTVERSION=	2.1.26
PORTREVISION=	3
CATEGORIES=	security linux
PKGNAMESUFFIX=	-lib
LIB_DISTNAMES=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	RFC 2222 SASL (Simple Authentication and Security Layer) (Linux CentOS ${LINUX_DIST_VER})

CONFLICTS=	linux-c6-${LINUXNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}2/pkg-descr
DOCSDIR=	${PREFIX}/usr/share/doc/${LINUXNAME}-${PORTVERSION}
LINUXNAME=	${PORTNAME}${PKGNAMESUFFIX}
RPMVERSION=	21.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
