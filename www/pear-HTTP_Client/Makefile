# Created by: Joseph Scott (<joseph@randomnetworks.com>)
# $FreeBSD: head/www/pear-HTTP_Client/Makefile 443341 2017-06-11 07:46:35Z sunpoet $

PORTNAME=	HTTP_Client
PORTVERSION=	1.2.1
CATEGORIES=	www pear

MAINTAINER=	joseph@randomnetworks.com
COMMENT=	PEAR classes for high level HTTP requests

BUILD_DEPENDS=	${PEARDIR}/HTTP.php:www/pear-HTTP \
		${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request
RUN_DEPENDS=	${PEARDIR}/HTTP.php:www/pear-HTTP \
		${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request

USES=		pear

.include <bsd.port.mk>
