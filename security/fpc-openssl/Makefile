# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/security/fpc-openssl/Makefile 436248 2017-03-15 14:45:54Z mat $

CATEGORIES=	security lang
PKGNAMESUFFIX=	-openssl

MAINTAINER=	freebsd-fpc@FreeBSD.org
COMMENT=	Free Pascal unit for OpenSSL

USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	OPENSSL
OPENSSL_DESC=	Install SSL and crypto library
OPTIONS_DEFAULT=	OPENSSL

OPENSSL_USES=		ssl

.include "${MASTERDIR}/Makefile"
