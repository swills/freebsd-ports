# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/audio/fpc-oggvorbis/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	audio lang
PKGNAMESUFFIX=	-oggvorbis

COMMENT=	Free Pascal interface to ogg & vorbis libraries

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	LIBOGG LIBVORBIS
LIBOGG_DESC=	Install ogg library
LIBVORBIS_DESC=	Install vorbis library
OPTIONS_DEFAULT=	LIBOGG LIBVORBIS

LIBOGG_LIB_DEPENDS=	libogg.so:audio/libogg
LIBVORBIS_LIB_DEPENDS=	libvorbis.so:audio/libvorbis

.include "${MASTERDIR}/Makefile"
