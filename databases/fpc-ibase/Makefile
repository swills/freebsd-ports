# Created by: John Merryweather Cooper
# $FreeBSD: head/databases/fpc-ibase/Makefile 414015 2016-04-25 16:14:02Z mat $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-ibase

MAINTAINER=	freebsd-fpc@FreeBSD.org
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
