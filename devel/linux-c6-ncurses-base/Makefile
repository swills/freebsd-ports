# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/devel/linux-c6-ncurses-base/Makefile 432937 2017-01-31 16:54:21Z tijl $

PORTNAME=	ncurses
PORTVERSION=	5.7
PORTREVISION=	4
CATEGORIES=	devel linux
PKGNAMESUFFIX=	-base
BIN_DISTNAMES=	${LINUXNAME}-${DISTVERSIONFULL}

MAINTAINER=	emulation@FreeBSD.org
COMMENT=	Terminfo database required by Linux ncurses programs

DESCR=		${.CURDIR}/../${PORTNAME}/pkg-descr
LINUXNAME=	${PORTNAME}${PKGNAMESUFFIX}
RPMVERSION=	4.20090207.el6
USES=		linux:c6
USE_LINUX_RPM=	nolib

.include <bsd.port.mk>
