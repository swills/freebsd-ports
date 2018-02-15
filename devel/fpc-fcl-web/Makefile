# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/devel/fpc-fcl-web/Makefile 461475 2018-02-11 08:32:43Z antoine $

PORTREVISION=	1
CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-web

COMMENT=	Free Pascal web application libary (FCL)

USE_FPC=	dblib fcl-async fcl-base fcl-db fcl-xml fcl-json fcl-net \
		fcl-fpcunit fcl-passrc fastcgi httpd22 httpd24 ibase mysql \
		odbc openssl oracle postgres pxlib rtl-extra sqlite

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
