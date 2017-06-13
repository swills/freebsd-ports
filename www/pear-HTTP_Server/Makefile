# Created by: Gerrit Beine (<tux@pinguru.net>)
# $FreeBSD: head/www/pear-HTTP_Server/Makefile 443346 2017-06-11 07:46:59Z sunpoet $

PORTNAME=	HTTP_Server
PORTVERSION=	0.4.1
CATEGORIES=	www devel pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	HTTP server class

BUILD_DEPENDS=	${PEARDIR}/HTTP.php:www/pear-HTTP \
		${PEARDIR}/Net/Server.php:net/pear-Net_Server
RUN_DEPENDS=	${PEARDIR}/HTTP.php:www/pear-HTTP \
		${PEARDIR}/Net/Server.php:net/pear-Net_Server

USES=		pear

.include <bsd.port.mk>
