# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/security/fpc-openssl/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	security lang
PKGNAMESUFFIX=	-openssl

COMMENT=	Free Pascal unit for OpenSSL

USES=		fpc
USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	OPENSSL
OPENSSL_DESC=	Install SSL and crypto library
OPTIONS_DEFAULT=	OPENSSL

OPENSSL_USES=		ssl

.include "${MASTERDIR}/Makefile"
