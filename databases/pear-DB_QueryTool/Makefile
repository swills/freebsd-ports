# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: head/databases/pear-DB_QueryTool/Makefile 443157 2017-06-11 07:28:34Z sunpoet $

PORTNAME=	DB_QueryTool
PORTVERSION=	1.1.2
CATEGORIES=	databases www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR OO-interface for easily retrieving and modifying data in a DB

BUILD_DEPENDS=	${PEARDIR}/DB.php:databases/pear-DB \
		${PEARDIR}/Log/null.php:sysutils/pear-Log
RUN_DEPENDS=	${PEARDIR}/DB.php:databases/pear-DB \
		${PEARDIR}/Log/null.php:sysutils/pear-Log

USES=		pear

.include <bsd.port.mk>
