# $FreeBSD: head/www/fpc-libmicrohttpd/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	www lang
PKGNAMESUFFIX=	-libmicrohttpd

COMMENT=	Free Pascal libmicrohttpd unit

USES=		fpc
USE_FPC=	rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
