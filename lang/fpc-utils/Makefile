# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/lang/fpc-utils/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	lang
PKGNAMESUFFIX=	-utils

COMMENT=	Free Pascal Compiler utilities

USE_FPC=	chm fcl-base fcl-net fcl-passrc fcl-res fcl-xml fppkg \
		libcurl fcl-json rtl-extra rtl-objpas openssl fcl-async \
		fcl-web fcl-db ibase mysql odbc oracle postgres sqlite \
		dblib pxlib fastcgi httpd22 httpd24

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/utils
EXTRACTUNITDIR=	${WRKUNITDIR} ${FPCSRCDIR}/rtl

post-install:
	${RM} ${STAGEDIR}${PREFIX}/bin/fpcmake
	${RM} ${STAGEDIR}${PREFIX}/bin/fpcmkcfg

.include "${MASTERDIR}/Makefile"
