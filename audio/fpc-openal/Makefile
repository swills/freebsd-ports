# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/audio/fpc-openal/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	audio lang
PKGNAMESUFFIX=	-openal

COMMENT=	Free Pascal interface to openal library

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	OPENAL
OPENAL_DESC=	Install openal library
OPTIONS_DEFAULT=	OPENAL

OPENAL_USES=	openal:soft

.include "${MASTERDIR}/Makefile"
