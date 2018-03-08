# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/net/pear-XML_RPC2/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	XML_RPC2
PORTVERSION=	1.1.3
CATEGORIES=	net devel pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	XML-RPC client/server library

LICENSE=	PHP301

BUILD_DEPENDS=	${PEARDIR}/Cache/Lite.php:sysutils/pear-Cache_Lite@${PHP_FLAVOR} \
		${PEARDIR}/HTTP/Request2.php:www/pear-HTTP_Request2@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Cache/Lite.php:sysutils/pear-Cache_Lite@${PHP_FLAVOR} \
		${PEARDIR}/HTTP/Request2.php:www/pear-HTTP_Request2@${PHP_FLAVOR}

USE_PHP=	curl
USES=	pear

.include <bsd.port.mk>
