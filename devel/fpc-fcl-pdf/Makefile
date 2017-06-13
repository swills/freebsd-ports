# $FreeBSD: head/devel/fpc-fcl-pdf/Makefile 434892 2017-02-26 17:36:09Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fcl-pdf

MAINTAINER=	freebsd-fpc@FreeBSD.org
COMMENT=	Free Pascal pdf (FCL)

USE_FPC=	fcl-base fcl-image fcl-res pasjpeg rtl-objpas

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
