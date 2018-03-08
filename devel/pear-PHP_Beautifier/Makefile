# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: head/devel/pear-PHP_Beautifier/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	PHP_Beautifier
PORTVERSION=	0.1.15
PORTREVISION=	1
CATEGORIES=	devel www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR beautifier for PHP

BUILD_DEPENDS=	${PEARDIR}/Log.php:sysutils/pear-Log@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Log.php:sysutils/pear-Log@${PHP_FLAVOR}

USES=		pear php
USE_PHP=	tokenizer bz2

.include <bsd.port.mk>
