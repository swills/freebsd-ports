# $FreeBSD: head/security/php72-hash/Makefile 480010 2018-09-18 11:01:50Z linimon $

CATEGORIES=	security

MASTERDIR=	${.CURDIR}/../../lang/php72

PKGNAMESUFFIX=	-hash

BROKEN_mips64=		fails to compile: KeccakHash.h: No such file or directory
BROKEN_powerpc64=	fails to compile: KeccakHash.h: No such file or directory

TEST_TARGET=    test

.include "${MASTERDIR}/Makefile"
