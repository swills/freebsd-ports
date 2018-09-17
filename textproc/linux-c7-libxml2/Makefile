# Created by: Piotr Kubaj <pkubaj@anongoth.pl>
# $FreeBSD: head/textproc/linux-c7-libxml2/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	libxml2
PORTVERSION=	2.9.1
PORTREVISION=	1
CATEGORIES=	textproc linux

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Library providing XML and HTML support (Linux CentOS ${LINUX_DIST_VER})

LICENSE=	MIT

CONFLICTS=	linux-c6-${PORTNAME}-[0-9]*

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
RPMVERSION=	6.el7_2.3
USES=		linux:c7
USE_LDCONFIG=	yes
USE_LINUX_RPM=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
