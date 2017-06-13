# Created by: Alonso Cardenas <acm@FreeBSD.org>
# $FreeBSD: head/sysutils/bareos-client/Makefile 439102 2017-04-21 17:47:38Z acm $

PORTNAME=	bareos
PORTREVISION=	1
PKGNAMESUFFIX=	-client

COMMENT=	Backup archiving recovery open sourced (client)

BROKEN_aarch64=	Fails to link: missing sbrk

WITH_CLIENT_ONLY=yes
USE_RC_SUBR=	bareos-fd

PLIST=		${PKGDIR}/pkg-plist.client
MASTERDIR=	${.CURDIR}/../../sysutils/bareos-server

OPTIONS_DEFINE=	NLS PYTHON LMDB SCSICRYPTO
OPTIONS_DEFAULT=#
LMDB_DESC=	Enable build of LMDB support

.include "${MASTERDIR}/Makefile"
