# Created by: chinsan
# $FreeBSD: head/net/pear-Net_Geo/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Net_Geo
PORTVERSION=	1.0.5
CATEGORIES=	net pear

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Geographical locations based on Internet address

BUILD_DEPENDS=	${PEARDIR}/Cache.php:sysutils/pear-Cache@${PHP_FLAVOR} \
		${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Cache.php:sysutils/pear-Cache@${PHP_FLAVOR} \
		${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
