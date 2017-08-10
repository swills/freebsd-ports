# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/www/fpc-httpd22/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	www lang
PKGNAMESUFFIX=	-httpd22

COMMENT=	Free Pascal headers for Apache 2.2 series web server

USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	APACHE22
APACHE22_DESC=	Install apache22 server

APACHE22_USE=	APACHE=22

.include "${MASTERDIR}/Makefile"
