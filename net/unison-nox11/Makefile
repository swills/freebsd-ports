# Created by: Boris Samorodov <bsam@FreeBSD.org>
# $FreeBSD: head/net/unison-nox11/Makefile 415787 2016-05-24 13:41:13Z madpilot $

PKGNAMESUFFIX=	-nox11

MAINTAINER=	bsam@FreeBSD.org
COMMENT=	User-level file synchronization tool (without x11 stuff)

CONFLICTS=	unison-[0-9]* unison-devel-[0-9]*

OPTIONS_EXCLUDE=	X11
MASTERDIR=	${.CURDIR}/../unison

.include "${MASTERDIR}/Makefile"
