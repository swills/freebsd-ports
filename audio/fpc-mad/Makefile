# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/audio/fpc-mad/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	audio lang
PKGNAMESUFFIX=	-mad

COMMENT=	Free Pascal interface to mad library

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	LIBMAD
LIBMAD_DESC=	Install mad library
OPTIONS_DEFAULT=	LIBMAD

LIBMAD_LIB_DEPENDS=	libmad.so:audio/libmad

.include "${MASTERDIR}/Makefile"
