# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/archivers/fpc-unzip/Makefile 434894 2017-02-26 17:38:04Z acm $

CATEGORIES=	archivers lang
PKGNAMESUFFIX=	-unzip

MAINTAINER=	freebsd-fpc@FreeBSD.org
COMMENT=	Free Pascal routines for unzipping zip files

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

.include "${MASTERDIR}/Makefile"
