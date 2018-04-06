# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/www/fpc-httpd22/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	www lang
PKGNAMESUFFIX=	-httpd22

COMMENT=	Free Pascal headers for Apache 2.2 series web server

USES=		fpc
USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	APACHE22
APACHE22_DESC=	Install apache22 server

APACHE22_USE=	APACHE=22

.include "${MASTERDIR}/Makefile"
