# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/www/fpc-httpd24/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	www lang
PKGNAMESUFFIX=	-httpd24

COMMENT=	Free Pascal headers for Apache 2.4 series web server

USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	APACHE24
APACHE24_DESC=	Install apache24 server

APACHE24_USE=	APACHE=24

.include "${MASTERDIR}/Makefile"
