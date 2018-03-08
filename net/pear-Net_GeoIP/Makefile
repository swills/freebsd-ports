# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/net/pear-Net_GeoIP/Makefile 463917 2018-03-08 19:48:41Z mat $

PORTNAME=	Net_GeoIP
PORTVERSION=	1.0.0.r1
PORTREVISION=	1
CATEGORIES=	net pear
DISTNAME=	Net_GeoIP-1.0.0RC1

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Library to perform geo-location lookups of IP addresses

BUILD_DEPENDS=	${PEARDIR}/Cache.php:sysutils/pear-Cache@${PHP_FLAVOR} \
		${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer@${PHP_FLAVOR}
RUN_DEPENDS=	${PEARDIR}/Cache.php:sysutils/pear-Cache@${PHP_FLAVOR} \
		${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer@${PHP_FLAVOR}

USES=		pear

.include <bsd.port.mk>
