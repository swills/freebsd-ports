# Created by: Nikolai Lifanov
# $FreeBSD: head/sysutils/genisoimage/Makefile 425823 2016-11-10 01:21:43Z linimon $

PKGNAMESUFFIX=	-genisoimage

COMMENT=	Standalone genisoimage from cdrkit

RUN_DEPENDS=	# nada

CONFLICTS=	# nada

PLIST_SUB=	CDRKIT="@comment " GENISOIMAGE=""

SLAVE_PORT=	cdrkit

MASTERDIR=	${.CURDIR}/../cdrkit

BROKEN_aarch64=	Fails to link: missing sbrk

.include "${MASTERDIR}/Makefile"
