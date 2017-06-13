# Created by: Alexander Nedotsukov <bland@FreeBSD.org>
# $FreeBSD: head/emulators/parallels-tools/Makefile 369843 2014-10-02 18:23:42Z glebius $

PORTNAME=	parallels-tools
PORTVERSION=	0.1.2
PORTREVISION=	1
CATEGORIES=	emulators
MASTER_SITES=	LOCAL/bland

MAINTAINER=	bland@FreeBSD.org
COMMENT=	Parallels Desktop Tools for FreeBSD

USES=		kmod tar:bzip2 uidfix

ONLY_FOR_ARCHS=	amd64 i386

PLIST_FILES=	${KMODDIR}/if_pvmnet.ko

.include <bsd.port.mk>
