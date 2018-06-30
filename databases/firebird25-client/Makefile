# $FreeBSD: head/databases/firebird25-client/Makefile 473551 2018-06-29 14:22:11Z jbeich $

PORTNAME=	firebird
PORTREVISION=	1
PKGNAMESUFFIX=	${PORTVERSION:R:S/.//}-client

COMMENT=	Firebird-2 database client

MASTERDIR=	${.CURDIR}/../firebird25-server

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

.include "${MASTERDIR}/Makefile"
