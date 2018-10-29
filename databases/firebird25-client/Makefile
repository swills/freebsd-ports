# $FreeBSD: head/databases/firebird25-client/Makefile 482830 2018-10-23 11:35:03Z jbeich $

PORTNAME=	firebird
PKGNAMESUFFIX=	${PORTVERSION:R:S/.//}-client

COMMENT=	Firebird-2 database client

MASTERDIR=	${.CURDIR}/../firebird25-server

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

.include "${MASTERDIR}/Makefile"
