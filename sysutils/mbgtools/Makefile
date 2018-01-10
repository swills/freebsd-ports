# Created by: George Neville-Neil gnn@freebsd.org
# $FreeBSD: head/sysutils/mbgtools/Makefile 458561 2018-01-09 19:16:16Z danfe $

PORTNAME=	mbgtools
DISTVERSION=	fbsd-1.0.0
CATEGORIES=	sysutils
MASTER_SITES=	http://www.meinberg.de/download/drivers/

MAINTAINER=	gnn@FreeBSD.org
COMMENT=	Drivers and tools for Meinberg PTP/GPS cards

LICENSE=	BSD

BROKEN_aarch64=		fails to compile: unused variables
BROKEN_armv6=		fails to compile: implicit declaration of function 'cp15_pmccntr_get' is invalid in C99
BROKEN_mips64=		fails to compile: unused variables
BROKEN_powerpc64=	fails to compile: warning: mbg_dbg_data defined but not used
BROKEN_sparc64=		fails to compile: error in structure definitions

USE_RC_SUBR=	mbgsvcd

USES=		kmod uidfix

.include <bsd.port.mk>
