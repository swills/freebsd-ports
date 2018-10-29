# Created by: Sergey Kozlov <skozlov@FreeBSD.org>
# $FreeBSD: head/net/intel-ix-kmod/Makefile 483387 2018-10-29 14:58:44Z skozlov $

PORTNAME=	ix
PORTVERSION=	3.3.6
PORTREVISION=	1
PORTEPOCH=	0
MASTER_SITE_SUBDIR=	14688/eng

MAINTAINER=	freebsd@intel.com
COMMENT=	10 gigabit FreeBSD Base Driver for Intel(R) Network Connections

MANPAGENAME=	ixgbe
MANPAGELINKS=	ix if_ix if_ixgbe

MAX_NETMAP_OSVERSION=	1199999  # Doesn't build w/NETMAP on 12

MASTERDIR=	${.CURDIR}/../intel-ixl-kmod
PKGDIR=		${.CURDIR}
DISTINFO_FILE=	${.CURDIR}/distinfo

.include "${MASTERDIR}/Makefile"
