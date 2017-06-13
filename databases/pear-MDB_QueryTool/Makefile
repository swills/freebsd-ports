# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: head/databases/pear-MDB_QueryTool/Makefile 443166 2017-06-11 07:29:17Z sunpoet $

PORTNAME=	MDB_QueryTool
PORTVERSION=	1.2.3
CATEGORIES=	databases www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR OO-interface for easily retrieving and modifying data in a DB

BUILD_DEPENDS=	${PEARDIR}/MDB.php:databases/pear-MDB \
		${PEARDIR}/Log/null.php:sysutils/pear-Log
RUN_DEPENDS:=	${PEARDIR}/MDB.php:databases/pear-MDB \
		${PEARDIR}/Log/null.php:sysutils/pear-Log

USES=		pear

.include <bsd.port.mk>
