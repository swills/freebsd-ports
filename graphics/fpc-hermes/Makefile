# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/graphics/fpc-hermes/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-hermes

COMMENT=	Free Pascal hermes unit

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	HERMES
HERMES_DESC=	Install hermes graphics library
OPTIONS_DEFAULT=	HERMES

HERMES_LIB_DEPENDS=	libHermes.so:graphics/Hermes

.include "${MASTERDIR}/Makefile"
