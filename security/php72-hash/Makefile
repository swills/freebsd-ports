# $FreeBSD: head/security/php72-hash/Makefile 473660 2018-07-01 09:17:45Z linimon $

CATEGORIES=	security

MASTERDIR=	${.CURDIR}/../../lang/php72

PKGNAMESUFFIX=	-hash

BROKEN_mips64=		fails to compile: KeccakHash.h: No such file or directory

.include "${MASTERDIR}/Makefile"
