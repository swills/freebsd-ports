# Created by: chinsan <chisnan.tw@gmail.com>
# $FreeBSD: head/www/pear-Services_Delicious/Makefile 443355 2017-06-11 07:47:46Z sunpoet $

PORTNAME=	Services_Delicious
PORTVERSION=	0.6.0
CATEGORIES=	www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR Client for the del.icio.us web service

BUILD_DEPENDS=	${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer \
		${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request
RUN_DEPENDS=	${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer \
		${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request

USES=		dos2unix pear php
USE_PHP=	openssl

.include <bsd.port.mk>
