# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/devel/fpc-newt/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-newt

COMMENT=	Free Pascal interface to newt library

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	NEWT
NEWT_DESC=	Install newt library
OPTIONS_DEFAULT=	NEWT

NEWT_LIB_DEPENDS=	libnewt.so:devel/newt

.include "${MASTERDIR}/Makefile"
