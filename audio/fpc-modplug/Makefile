# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/audio/fpc-modplug/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	audio lang
PKGNAMESUFFIX=	-modplug

COMMENT=	Free Pascal interface to modplug library

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	LIBMODPLUG
LIBMODPLUG_DESC=	Install modplug library
OPTIONS_DEFAULT=	LIBMODPLUG

LIBMODPLUG_LIB_DEPENDS=	libmodplug.so:audio/libmodplug

.include "${MASTERDIR}/Makefile"
