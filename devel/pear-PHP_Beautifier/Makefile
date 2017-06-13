# Created by: Antonio Carlos Venancio Junior (<antonio@inf.ufsc.br>)
# $FreeBSD: head/devel/pear-PHP_Beautifier/Makefile 443223 2017-06-11 07:35:46Z sunpoet $

PORTNAME=	PHP_Beautifier
PORTVERSION=	0.1.15
PORTREVISION=	1
CATEGORIES=	devel www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR beautifier for PHP

BUILD_DEPENDS=	${PEARDIR}/Log.php:sysutils/pear-Log
RUN_DEPENDS=	${PEARDIR}/Log.php:sysutils/pear-Log

USES=		pear php
USE_PHP=	tokenizer bz2

.include <bsd.port.mk>
