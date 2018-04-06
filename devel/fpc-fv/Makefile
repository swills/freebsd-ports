# Created by: John Merryweather Cooper
# $FreeBSD: head/devel/fpc-fv/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	devel lang
PKGNAMESUFFIX=	-fv

COMMENT=	FreeVision is a Free Pascal unit for Delphi support

USES=		fpc
USE_FPC=	rtl-console rtl-extra

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	EXAMPLES

HAVE_EXAMPLES=	yes

.include "${MASTERDIR}/Makefile"
