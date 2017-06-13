# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: head/net/pear-Net_GeoIP/Makefile 443283 2017-06-11 07:41:41Z sunpoet $

PORTNAME=	Net_GeoIP
PORTVERSION=	1.0.0.r1
PORTREVISION=	1
CATEGORIES=	net pear
DISTNAME=	Net_GeoIP-1.0.0RC1

MAINTAINER=	joneum@FreeBSD.org
COMMENT=	Library to perform geo-location lookups of IP addresses

BUILD_DEPENDS=	${PEARDIR}/Cache.php:sysutils/pear-Cache \
		${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer
RUN_DEPENDS=	${PEARDIR}/Cache.php:sysutils/pear-Cache \
		${PEARDIR}/XML/Serializer.php:devel/pear-XML_Serializer

USES=		pear

.include <bsd.port.mk>
