# Created by: John Merryweather Cooper
# $FreeBSD: head/devel/fpc-fv/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fv

COMMENT=	FreeVision is a Free Pascal unit for Delphi support

USE_FPC=	rtl-console rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	EXAMPLES

HAVE_EXAMPLES=	yes

.include "${MASTERDIR}/Makefile"
