# Created by: Christopher Key <cjk32@cam.ac.uk>
# $FreeBSD: head/lang/fpc-lua/Makefile 447304 2017-08-03 23:40:28Z acm $

CATEGORIES=	lang
PKGNAMESUFFIX=	-lua

COMMENT=	Free Pascal interface to the lua interpreter

USE_FPC=	yes

MASTERDIR=	${.CURDIR}/../../lang/fpc
WRKUNITDIR=	${FPCSRCDIR}/packages/${PKGNAMESUFFIX:S/-//}
EXTRACTUNITDIR=	${WRKUNITDIR}

OPTIONS_DEFINE=	LUA
LUA_DESC=	Install lua library
OPTIONS_DEFAULT=	LUA

LUA_LIB_DEPENDS=	liblua-5.1.so:lang/lua51

.include "${MASTERDIR}/Makefile"
