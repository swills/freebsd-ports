# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/graphics/fpc-imagemagick/Makefile 447304 2017-08-03 23:40:28Z acm $

PORTREVISION=	1
CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-imagemagick

COMMENT=	Free Pascal interface to ImageMagick

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	IMAGEMAGICK
IMAGEMAGICK_DESC=	Install ImageMagick image proccesing tool
OPTIONS_DEFAULT=	IMAGEMAGICK

IMAGEMAGICK_LIB_DEPENDS=	libMagick++-6.so:graphics/ImageMagick

.include "${MASTERDIR}/Makefile"
