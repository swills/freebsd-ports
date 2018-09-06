# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/net/pear-XML_RPC2/Makefile 479030 2018-09-05 16:44:59Z joneum $

PORTNAME=	XML_RPC2
PORTVERSION=	1.1.4
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
