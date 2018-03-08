# Created by: Thierry Thomas (<thierry@FreeBSD.org>)
# $FreeBSD: head/sysutils/pear-Cache/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Cache
PORTVERSION=	1.5.6
PORTREVISION=	1
CATEGORIES=	sysutils www pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	PEAR framework for caching of arbitrary data

BUILD_DEPENDS=	${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/HTTP/Request.php:www/pear-HTTP_Request@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
