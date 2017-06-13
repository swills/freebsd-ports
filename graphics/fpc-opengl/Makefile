# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/graphics/fpc-opengl/Makefile 441503 2017-05-23 05:03:14Z rezny $

PORTREVISION=	1
CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-opengl

MAINTAINER=	freebsd-fpc@FreeBSD.org
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
