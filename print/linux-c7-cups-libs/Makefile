# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/print/linux-c7-cups-libs/Makefile 464668 2018-03-16 09:41:38Z jhale $

PORTNAME=	cups
PORTVERSION=	1.6.3
PORTREVISION=	4
CATEGORIES=	print linux
PKGNAMESUFFIX=	-libs
LIB_DISTNAMES=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Common UNIX Printing System libraries

CONFLICTS=	linux-c6-${LINUXNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
DOCSDIR=	${PREFIX}/usr/share/doc/${LINUXNAME}-${PORTVERSION}
LINUXNAME=	${PORTNAME}${PKGNAMESUFFIX}
RPMVERSION=	29.el7
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX=	avahi-libs openssl
USE_LINUX_RPM=	yes

.include <bsd.port.mk>
