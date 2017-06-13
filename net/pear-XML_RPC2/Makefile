# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/net/pear-XML_RPC2/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	XML_RPC2
PORTVERSION=	1.1.3
CATEGORIES=	net devel pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	XML-RPC client/server library

LICENSE=	PHP301

BUILD_DEPENDS=	${PEARDIR}/Cache/Lite.php:sysutils/pear-Cache_Lite \
		${PEARDIR}/HTTP/Request2.php:www/pear-HTTP_Request2
RUN_DEPENDS=	${PEARDIR}/Cache/Lite.php:sysutils/pear-Cache_Lite \
		${PEARDIR}/HTTP/Request2.php:www/pear-HTTP_Request2

USE_PHP=	curl
USES=	pear

.include <bsd.port.mk>
