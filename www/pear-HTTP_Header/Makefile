# Created by: Alex Miller (<asm@asm.kiev.ua>)
# $FreeBSD: head/www/pear-HTTP_Header/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	HTTP_Header
PORTVERSION=	1.2.1
CATEGORIES=	www devel pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR OO interface to modify and handle HTTP headers and status codes

BUILD_DEPENDS=	${PEARDIR}/HTTP.php:www/pear-HTTP@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/HTTP.php:www/pear-HTTP@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
