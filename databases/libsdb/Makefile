# Created by: ijliao
# $FreeBSD: head/databases/libsdb/Makefile 409784 2016-02-28 23:41:56Z rakuco $

PORTNAME=	libsdb
PORTVERSION=	0.10.1
CATEGORIES=	databases
MASTER_SITES=	http://siag.nu/pub/libsdb/
DISTNAME=	sdb-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple database library

MAKE_JOBS_UNSAFE=	yes

HAS_CONFIGURE=	yes
MAKE_ARGS=	PREFIX="${PREFIX}" CC="${CC}" CFLAGS="${CFLAGS}"
USE_LDCONFIG=	yes

PLIST_SUB=	VERSION="${PORTVERSION}"

.include <bsd.port.mk>
