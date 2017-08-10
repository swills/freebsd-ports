# Created by: John Merryweather Cooper
# $FreeBSD: head/databases/fpc-ibase/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-ibase

COMMENT=	Free Pascal interface to interbase

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	IBASE
IBASE_DESC=	Install Interbase/Firebird client
OPTIONS_DEFAULT=	IBASE

IBASE_USES=	firebird

.include "${MASTERDIR}/Makefile"
