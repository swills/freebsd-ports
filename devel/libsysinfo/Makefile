# Created by: Jason Bacon <bacon4000@gmail.com>
# $FreeBSD: head/devel/libsysinfo/Makefile 424534 2016-10-23 17:30:48Z imp $

PORTNAME=	libsysinfo
PORTVERSION=	0.0.3
CATEGORIES=	devel
PORTREVSION=	1

MAINTAINER=	imp@bsdimp.com
COMMENT=	GNU libc's sysinfo port for FreeBSD

LICENSE=	BSD3CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	bsdimp
DISTVERSIONPREFIX= v

USES=		uidfix
USE_LDCONFIG=	yes

LDFLAGS+=	-lkvm

PLIST_FILES=	include/sys/sysinfo.h \
		lib/libsysinfo.a \
		lib/libsysinfo.so \
		lib/libsysinfo.so.0 \
		man/man3/sysinfo.3.gz

.include <bsd.port.mk>
