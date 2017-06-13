# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/math/fpc-gmp/Makefile 434894 2017-02-26 17:38:04Z acm $

CATEGORIES=	math lang
PKGNAMESUFFIX=	-gmp

MAINTAINER=	freebsd-fpc@FreeBSD.org
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
