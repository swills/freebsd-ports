# Created by: Alonso Cárdenas Márquez <acm@FreeBSD.org>
# $FreeBSD: head/databases/firebird25-client/Makefile 450556 2017-09-25 00:02:36Z jbeich $

PORTNAME=	firebird
PORTREVISION=	1
PKGNAMESUFFIX=	${PORTVERSION:R:S/.//}-client

COMMENT=	Firebird-2 database client

MASTERDIR=	${.CURDIR}/../firebird25-server

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

.include "${MASTERDIR}/Makefile"
