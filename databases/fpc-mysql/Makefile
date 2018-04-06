# Created by: John Merryweather Cooper
# $FreeBSD: head/databases/fpc-mysql/Makefile 466532 2018-04-05 04:52:36Z acm $

CATEGORIES=	databases lang
PKGNAMESUFFIX=	-mysql

COMMENT=	Free Pascal interface to MySQL

USES=		fpc

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	MYSQL
MYSQL_DESC=	Install MySQL client
OPTIONS_DEFAULT=	MYSQL

MYSQL_USE=	MYSQL=yes

.include "${MASTERDIR}/Makefile"
