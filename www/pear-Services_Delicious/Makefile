# Created by: chinsan <chisnan.tw@gmail.com>
# $FreeBSD: head/www/pear-Services_Delicious/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Services_Delicious
PORTVERSION=	0.6.0
CATEGORIES=	www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR Client for the del.icio.us web service

BUILD_DEPENDS=	${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer@${PHP_FLAVOR} \
		${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer@${PHP_FLAVOR} \
		${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request@${PHP_FLAVOR}

USES=		dos2unix pear php
USE_PHP=	openssl

.include <bsd.port.mk>
