# Created by: Alonso Cárdenas Márquez <acm@FreeBSD.org>
# $FreeBSD: head/databases/firebird25-client/Makefile 466648 2018-04-06 15:53:16Z jbeich $

PORTNAME=	firebird
PORTREVISION=	3
PKGNAMESUFFIX=	${PORTVERSION:R:S/.//}-client

COMMENT=	Firebird-2 database client

MASTERDIR=	${.CURDIR}/../firebird25-server

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

.include "${MASTERDIR}/Makefile"
