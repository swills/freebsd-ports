# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/multimedia/fpc-dts/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	multimedia lang
PKGNAMESUFFIX=	-dts

COMMENT=	Free Pascal interface to the dts library

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	LIBDCA
LIBDCA_DESC=	Install dts library
OPTIONS_DEFAULT=	LIBDCA

LIBDCA_LIB_DEPENDS=	libdca.so:multimedia/libdca

.include "${MASTERDIR}/Makefile"
