# $FreeBSD: head/databases/pecl-redis/Makefile 475660 2018-07-29 13:20:13Z joneum $

PORTNAME=	redis
PORTVERSION=	4.1.0
CATEGORIES=	databases

MAINTAINER=	daniel@blodan.se
COMMENT=	Extension to access Redis

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/COPYING

CONFLICTS_INSTALL=	pecl-redis3

USES=		php:pecl
USE_PHP=	session:build

OPTIONS_DEFINE=	IGBINARY
IGBINARY_DESC=	Build with Igbinary serializer

IGBINARY_CONFIGURE_ENABLE=	redis-igbinary
IGBINARY_USE=			php=igbinary:build

.include <bsd.port.mk>
