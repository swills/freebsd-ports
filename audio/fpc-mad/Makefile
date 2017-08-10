# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/audio/fpc-mad/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	audio lang
PKGNAMESUFFIX=	-mad

COMMENT=	Free Pascal interface to mad library

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	LIBMAD
LIBMAD_DESC=	Install mad library
OPTIONS_DEFAULT=	LIBMAD

LIBMAD_LIB_DEPENDS=	libmad.so:audio/libmad

.include "${MASTERDIR}/Makefile"
