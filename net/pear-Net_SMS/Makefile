# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: head/net/pear-Net_SMS/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Net_SMS
PORTVERSION=	0.2.1
CATEGORIES=	net pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR SMS functionality

BUILD_DEPENDS=	${PEARDIR}/Mail.php:mail/pear-Mail@${PHP_FLAVOR} \
		${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Mail.php:mail/pear-Mail@${PHP_FLAVOR} \
		${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request@${PHP_FLAVOR}

USE_PHP=	gettext
USES=		pear php

.include <bsd.port.mk>
