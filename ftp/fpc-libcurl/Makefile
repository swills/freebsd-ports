# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/ftp/fpc-libcurl/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	ftp lang
PKGNAMESUFFIX=	-libcurl

COMMENT=	Free Pascal interface to libcurl

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	LIBCURL
LIBCURL_DESC=	Install curl tools and library
OPTIONS_DEFAULT=	LIBCURL

LIBCURL_LIB_DEPENDS=	libcurl.so:ftp/curl

.include "${MASTERDIR}/Makefile"
