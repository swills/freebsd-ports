# Created by: George Reid <greid@ukug.uk.freebsd.org>
# $FreeBSD: head/graphics/plasma-kmod/Makefile 483228 2018-10-28 06:27:54Z linimon $

PORTNAME=	plasma
PORTVERSION=	0.1
PORTREVISION=	4
CATEGORIES=	graphics
MASTER_SITES=	SF/futurebsd/futurebsd/${PORTNAME}
PKGNAMESUFFIX=	-kmod

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Plasma-effect screensaver kernel module

LICENSE=	BSD3CLAUSE

PLIST_FILES=	${KMODDIR}/plasma_saver.ko

USES=		kmod uidfix

MAKE_ARGS=	KMODDIR=${KMODDIR}

.include <bsd.port.mk>
