# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/pear-PHP_UML/Makefile 443228 2017-06-11 07:36:11Z sunpoet $

PORTNAME=	PHP_UML
PORTVERSION=	1.6.2
CATEGORIES=	devel

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR Class to Create UML Representation of PHP Code

LICENSE=	LGPL3

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:devel/pear \
		${PEARDIR}/Console/CommandLine.php:devel/pear-Console_CommandLine
RUN_DEPENDS=	${PEARDIR}/PEAR.php:devel/pear

BROKEN_powerpc64=	fails to package: Signal 11

USES=		pear php
USE_PHP=	spl xsl

.include <bsd.port.mk>
