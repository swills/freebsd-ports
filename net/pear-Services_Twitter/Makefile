# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: head/net/pear-Services_Twitter/Makefile 441000 2017-05-16 13:37:51Z joneum $

PORTNAME=	Services_Twitter
PORTVERSION=	0.7.0
CATEGORIES=	net www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PHP interface to Twitter's API

BUILD_DEPENDS=	${PEARDIR}/HTTP/Request2.php:www/pear-HTTP_Request2
RUN_DEPENDS=	${PEARDIR}/HTTP/Request2.php:www/pear-HTTP_Request2

USE_PHP=	json simplexml mbstring

USES=	pear

.include <bsd.port.mk>
