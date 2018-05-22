# $FreeBSD: head/sysutils/bareos16-client/Makefile 470319 2018-05-18 19:00:37Z acm $

PORTNAME=	bareos16
PORTREVISION=	1
PKGNAMESUFFIX=	-client

COMMENT=	Backup archiving recovery open sourced (client)

BROKEN_aarch64=	Fails to link: missing sbrk

CONFLICTS=	bareos-client-*

WITH_CLIENT_ONLY=yes
USE_RC_SUBR=	bareos-fd

PLIST=		${PKGDIR}/pkg-plist.client
MASTERDIR=	${.CURDIR}/../../sysutils/bareos16-server

OPTIONS_DEFINE=	NLS PYTHON LMDB SCSICRYPTO
LMDB_DESC=	Enable build of LMDB support

.include "${MASTERDIR}/Makefile"
