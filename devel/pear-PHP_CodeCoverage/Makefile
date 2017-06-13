# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: head/devel/pear-PHP_CodeCoverage/Makefile 443136 2017-06-11 02:28:11Z sunpoet $

PORTNAME=	PHP_CodeCoverage
PORTVERSION=	1.2.7
CATEGORIES=	devel pear
MASTER_SITES=	http://pear.phpunit.de/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Library that provides PHP code coverage information

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	pear-File_Iterator>=1.3.0:devel/pear-File_Iterator \
		pear-PHP_TokenStream>=1.1.3:devel/pear-PHP_TokenStream \
		pear-Text_Template>=1.1.1:textproc/pear-Text_Template \
		${PEARDIR}/.channels/pear.phpunit.de.reg:devel/pear-channel-phpunit
RUN_DEPENDS=	pear-File_Iterator>=1.3.0:devel/pear-File_Iterator \
		pear-PHP_TokenStream>=1.1.3:devel/pear-PHP_TokenStream \
		pear-Text_Template>=1.1.1:textproc/pear-Text_Template \
		${PEARDIR}/.channels/pear.phpunit.de.reg:devel/pear-channel-phpunit

BROKEN=		unfetchable, redirects to https://phpunit.de/

USES=	pear
PEAR_CHANNEL=	phpunit

OPTIONS_DEFINE=	DOM XDEBUG
DOM_DESC=	Enable DOM support
XDEBUG_DESC=	Enable Xdebug support

DOM_USE=	PHP=dom
XDEBUG_RUN_DEPENDS=	${LOCALBASE}/lib/php/${PHP_EXT_DIR}/xdebug.so:devel/php-xdebug

.include <bsd.port.mk>
