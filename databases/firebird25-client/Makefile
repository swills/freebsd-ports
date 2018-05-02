# $FreeBSD: head/databases/firebird25-client/Makefile 468287 2018-04-25 18:39:19Z acm $

PORTNAME=	firebird
PKGNAMESUFFIX=	${PORTVERSION:R:S/.//}-client

COMMENT=	Firebird-2 database client

MASTERDIR=	${.CURDIR}/../firebird25-server

PLIST=		${PKGDIR}/pkg-plist.client

CLIENT_ONLY=	yes

.include "${MASTERDIR}/Makefile"
