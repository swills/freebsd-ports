# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: head/net/pear-Net_SMS/Makefile 443290 2017-06-11 07:42:15Z sunpoet $

PORTNAME=	Net_SMS
PORTVERSION=	0.2.1
CATEGORIES=	net pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR SMS functionality

BUILD_DEPENDS=	${PEARDIR}/Mail.php:mail/pear-Mail \
		${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request
RUN_DEPENDS=	${PEARDIR}/Mail.php:mail/pear-Mail \
		${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request

USE_PHP=	gettext
USES=		pear php

.include <bsd.port.mk>
