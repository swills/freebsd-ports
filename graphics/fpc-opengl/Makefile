# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/graphics/fpc-opengl/Makefile 447304 2017-08-03 23:40:28Z acm $

PORTREVISION=	1
CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-opengl

COMMENT=	Free Pascal interface to the OpenGL library

USE_FPC=	x11

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	EXAMPLES OPENGL
OPENGL_DESC=	Install opengl libraries
OPTIONS_DEFAULT=	OPENGL

OPENGL_USE=	GL=glut
HAVE_EXAMPLES=	yes

.include "${MASTERDIR}/Makefile"
