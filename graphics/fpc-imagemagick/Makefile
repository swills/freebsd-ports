# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/graphics/fpc-imagemagick/Makefile 441761 2017-05-26 08:20:18Z kwm $

PORTREVISION=	1
CATEGORIES=	graphics lang
PKGNAMESUFFIX=	-imagemagick

MAINTAINER=	freebsd-fpc@FreeBSD.org
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
