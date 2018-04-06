# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/devel/fpc-fcl-net/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-net

COMMENT=	Free Pascal network interfaces (FCL)

USES=		fpc
USE_FPC=	fcl-base openssl fcl-xml fcl-passrc fcl-async rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
