# $FreeBSD: head/security/php72-hash/Makefile 475229 2018-07-24 08:44:32Z tz $

CATEGORIES=	security

MASTERDIR=	${.CURDIR}/../../lang/php72

PKGNAMESUFFIX=	-hash

TEST_TARGET=    test

BROKEN_mips64=		fails to compile: KeccakHash.h: No such file or directory

.include "${MASTERDIR}/Makefile"
