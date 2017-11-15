# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-PHP_CodeBrowser/Makefile 453994 2017-11-11 19:44:46Z joneum $

PORTNAME=	PHP_CodeBrowser
PORTVERSION=	1.0.2
CATEGORIES=	devel pear
MASTER_SITES=	http://pear.phpunit.de/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Code browser that augments the code with information

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	pear-Console_CommandLine>=1.2.2:devel/pear-Console_CommandLine \
		pear-File_Iterator>=1.4.2:devel/pear-File_Iterator \
		pear-Log>=1.13.1:sysutils/pear-Log
RUN_DEPENDS=	pear-Console_CommandLine>=1.2.2:devel/pear-Console_CommandLine \
		pear-File_Iterator>=1.4.2:devel/pear-File_Iterator \
		pear-Log>=1.13.1:sysutils/pear-Log

USES=	pear php
PEAR_CHANNEL=	phpunit

.include <bsd.port.mk>
