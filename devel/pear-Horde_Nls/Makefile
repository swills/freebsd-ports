# Created by: Martin Matuska <mm@FreeBSD.org>
# $FreeBSD: head/devel/pear-Horde_Nls/Makefile 425772 2016-11-08 23:31:05Z mm $

PORTNAME=	Horde_Nls
PORTVERSION=	2.2.1
CATEGORIES=	devel www pear
MASTER_SITES=	http://pear.horde.org/get/
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Native Language Support

USES=		horde
USE_HORDE_RUN=	Horde_Translation \
		Horde_Util

OPTIONS_DEFINE=	GEOIP
GEOIP_DESC=	Depend on geoip PHP extension

GEOIP_USES=	php
GEOIP_RUN_DEPENDS=	${PHPBASE}/lib/php/${PHP_EXT_DIR}/geoip.so:net/pecl-geoip

.include <bsd.port.mk>
