# $FreeBSD: head/audio/optimfrog-sse2/Makefile 408636 2016-02-10 16:14:34Z ak $

PKGNAMESUFFIX=	-sse2

MASTERDIR=	${.CURDIR}/../optimfrog
COMMENT=	Best-ratio lossless audio codec (SSE2 required)

CONFLICTS_INSTALL=	optimfrog-[0-9]*

ONLY_FOR_ARCHS=	i386
OPTIONS_DEFAULT=	SSE2

.include "${MASTERDIR}/Makefile"
