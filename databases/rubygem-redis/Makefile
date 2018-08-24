# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/databases/rubygem-redis/Makefile 477264 2018-08-15 19:33:15Z sunpoet $

PORTNAME=	redis
PORTVERSION=	4.0.2
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby client library for Redis, the key value storage server

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

post-install:
	${RM} ${STAGEDIR}${PREFIX}/bin/build

.include <bsd.port.mk>
