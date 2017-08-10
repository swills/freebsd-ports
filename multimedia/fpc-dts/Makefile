# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/multimedia/fpc-dts/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	multimedia lang
PKGNAMESUFFIX=	-dts

COMMENT=	Free Pascal interface to the dts library

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	LIBDCA
LIBDCA_DESC=	Install dts library
OPTIONS_DEFAULT=	LIBDCA

LIBDCA_LIB_DEPENDS=	libdca.so:multimedia/libdca

.include "${MASTERDIR}/Makefile"
