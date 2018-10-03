# $FreeBSD$

CATEGORIES=	security

MASTERDIR=	${.CURDIR}/../../lang/php72

PKGNAMESUFFIX=	-hash

.include "${MASTERDIR}/Makefile"
BROKEN_powerpc64=	fails to compile: KeccakHash.h: No such file or directory
.if ${ARCH:Mpowerpc*} || ${ARCH} == mips64
CFLAGS+=       -DHAVE_SLOW_HASH3
.endif
TEST_TARGET=    test

.include "${MASTERDIR}/Makefile"
