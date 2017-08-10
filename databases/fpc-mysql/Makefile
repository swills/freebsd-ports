# Created by: John Merryweather Cooper
# $FreeBSD: head/databases/fpc-mysql/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-mysql

COMMENT=	Free Pascal interface to MySQL

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	MYSQL
MYSQL_DESC=	Install MySQL client
OPTIONS_DEFAULT=	MYSQL

MYSQL_USE=	MYSQL=yes

.include "${MASTERDIR}/Makefile"
