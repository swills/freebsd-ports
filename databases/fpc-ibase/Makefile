# Created by: John Merryweather Cooper
# $FreeBSD: head/databases/fpc-ibase/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-ibase

COMMENT=	Free Pascal interface to interbase

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	IBASE
IBASE_DESC=	Install Interbase/Firebird client
OPTIONS_DEFAULT=	IBASE

IBASE_USES=	firebird

.include "${MASTERDIR}/Makefile"
