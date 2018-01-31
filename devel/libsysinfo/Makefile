# $FreeBSD: head/devel/libsysinfo/Makefile 460452 2018-01-31 01:07:07Z jwb $

PORTNAME=	libsysinfo
PORTVERSION=	0.0.3
DISTVERSIONPREFIX=	v
PORTREVISION=	1
CATEGORIES=	devel

MAINTAINER=	imp@bsdimp.com
COMMENT=	GNU libc's sysinfo port for FreeBSD

LICENSE=	BSD3CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	bsdimp

USES=		uidfix
USE_LDCONFIG=	yes

LDFLAGS+=	-lkvm

PLIST_FILES=	include/sys/sysinfo.h \
		lib/libsysinfo.a \
		lib/libsysinfo.so \
		lib/libsysinfo.so.0 \
		man/man3/sysinfo.3.gz

.include <bsd.port.mk>
