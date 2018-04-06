# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/audio/fpc-openal/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	audio lang
PKGNAMESUFFIX=	-openal

COMMENT=	Free Pascal interface to openal library

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	OPENAL
OPENAL_DESC=	Install openal library
OPTIONS_DEFAULT=	OPENAL

OPENAL_USES=	openal:soft

.include "${MASTERDIR}/Makefile"
