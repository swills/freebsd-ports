# $FreeBSD: head/sysutils/bacula5-client/Makefile 448584 2017-08-22 21:59:48Z dvl $

PORTNAME=	bacula
PKGNAMESUFFIX=	5-client

COMMENT=	Network backup solution (client)

DEPRECATED=	No upstream commits since 2013. Use sysutils/bacula-static
EXPIRATION_DATE=	2017-10-04

CONFLICTS=	bacula-client-*

WITH_CLIENT_ONLY=yes
USE_RC_SUBR=	bacula-fd

PLIST=		${PKGDIR}/pkg-plist.client
MASTERDIR=	${.CURDIR}/../../sysutils/bacula5-server

OPTIONS_DEFINE=	NLS OPENSSL PYTHON
OPTIONS_DEFAULT=OPENSSL

BROKEN_aarch64=		Fails to link: missing sbrk

.include "${MASTERDIR}/Makefile"
