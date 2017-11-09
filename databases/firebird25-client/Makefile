# Created by: Alonso Cárdenas Márquez <acm@FreeBSD.org>
# $FreeBSD: head/databases/firebird25-client/Makefile 453790 2017-11-09 02:31:47Z jbeich $

PORTNAME=	firebird
PORTREVISION=	2
PKGNAMESUFFIX=	${PORTVERSION:R:S/.//}-client

COMMENT=	Firebird-2 database client

MASTERDIR=	${.CURDIR}/../firebird25-server

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

.include "${MASTERDIR}/Makefile"
