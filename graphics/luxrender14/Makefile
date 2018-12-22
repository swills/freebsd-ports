# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: head/graphics/luxrender14/Makefile 487266 2018-12-12 00:15:49Z jbeich $

DISTVERSION=	1.4
PORTREVISION=	2

LUX_REV=	dfd211d6faa0
LUXRAYS_REV=	7c7127ee1fa4

MASTERDIR=	${.CURDIR}/../luxrender
PKGNAMESUFFIX=	14

DISTINFO_FILE=	${.CURDIR}/distinfo
PATCHDIR=	${.CURDIR}/files

CONFLICTS_INSTALL=	${PORTNAME}-*

USES=		dos2unix
DOS2UNIX_FILES=	../luxrays/CMakeLists.txt

OPTIONS_SLAVE=	FREEIMAGE

.include "${MASTERDIR}/Makefile"
