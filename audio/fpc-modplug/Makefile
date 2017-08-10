# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/audio/fpc-modplug/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	audio lang
PKGNAMESUFFIX=	-modplug

COMMENT=	Free Pascal interface to modplug library

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	LIBMODPLUG
LIBMODPLUG_DESC=	Install modplug library
OPTIONS_DEFAULT=	LIBMODPLUG

LIBMODPLUG_LIB_DEPENDS=	libmodplug.so:audio/libmodplug

.include "${MASTERDIR}/Makefile"
