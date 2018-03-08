# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/devel/pear-PHP_UML/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	PHP_UML
PORTVERSION=	1.6.2
CATEGORIES=	devel

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR Class to Create UML Representation of PHP Code

LICENSE=	LGPL3

BUILD_DEPENDS=	${PEARDIR}/PEAR.php:devel/pear@${PHP_FLAVOR} \
		${PEARDIR}/Console/CommandLine.php:devel/pear-Console_CommandLine@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/PEAR.php:devel/pear@${PHP_FLAVOR}

BROKEN_powerpc64=	fails to package: Signal 11

USES=		pear php
USE_PHP=	spl xsl

.include <bsd.port.mk>
