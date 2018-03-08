# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/net/pear-Services_Twitter/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Services_Twitter
PORTVERSION=	0.7.0
CATEGORIES=	net www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PHP interface to Twitter's API

BUILD_DEPENDS=	${PEARDIR}/HTTP/Request2.php:www/pear-HTTP_Request2@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/HTTP/Request2.php:www/pear-HTTP_Request2@${PHP_FLAVOR}

USE_PHP=	json simplexml mbstring

USES=	pear

.include <bsd.port.mk>
