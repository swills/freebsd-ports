# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/devel/fpc-bfd/Makefile 434894 2017-02-26 17:38:04Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-bfd

MAINTAINER=	freebsd-fpc@FreeBSD.org
COMMENT=	Free Pascal interface for the GNU Binary Format description

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

RUN_DEPENDS=	${LOCALBASE}/lib/libbfd.a:devel/binutils

.include "${MASTERDIR}/Makefile"
