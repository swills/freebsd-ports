# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/graphics/fpc-libpng/Makefile 412346 2016-04-01 14:00:51Z mat $

CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-libpng

MAINTAINER=	freebsd-fpc@FreeBSD.org
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
