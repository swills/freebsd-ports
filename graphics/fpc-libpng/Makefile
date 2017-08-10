# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/graphics/fpc-libpng/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-libpng

COMMENT=	Free Pascal interface to libpng, for reading PNG image files

USE_FPC=	zlib
USE_FPC_RUN=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	LIBPNG
LIBPNG_DESC=	Install png library for manipulating PNG images
OPTIONS_DEFAULT=	LIBPNG

LIBPNG_LIB_DEPENDS=	libpng.so:graphics/png

.include "${MASTERDIR}/Makefile"
