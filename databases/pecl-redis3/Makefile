# $FreeBSD: head/databases/pecl-redis3/Makefile 468272 2018-04-25 10:33:56Z joneum $

PORTNAME=	redis
PORTVERSION=	3.1.6
CATEGORIES=	databases
PKGNAMESUFFIX=	3

MAINTAINER=	daniel@blodan.se
COMMENT=	Extension to access Redis

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/COPYING

CONFLICTS_INSTALL=	pecl-redis

USES=		php:pecl
USE_PHP=	session:build

OPTIONS_DEFINE=	IGBINARY
IGBINARY_DESC=	Build with Igbinary serializer

IGBINARY_CONFIGURE_ENABLE=	redis-igbinary
IGBINARY_USE=			php=igbinary:build

.include <bsd.port.mk>
