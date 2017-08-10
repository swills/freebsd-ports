# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/security/fpc-openssl/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	security lang
PKGNAMESUFFIX=	-openssl

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
