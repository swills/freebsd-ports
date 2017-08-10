# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/math/fpc-gmp/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	math lang
PKGNAMESUFFIX=	-gmp

COMMENT=	Free Pascal interface to gmp library

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	GMP
GMP_DESC=	Install gmp library
OPTIONS_DEFAULT=	GMP

GMP_LIB_DEPENDS=	libgmp.so:math/gmp

.include "${MASTERDIR}/Makefile"
