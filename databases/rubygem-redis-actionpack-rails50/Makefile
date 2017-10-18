# $FreeBSD: head/databases/rubygem-redis-actionpack-rails50/Makefile 452296 2017-10-17 20:07:17Z sunpoet $

PORTNAME=	redis-actionpack
PORTVERSION=	5.0.2
CATEGORIES=	databases rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Redis session store for ActionPack

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionpack50>0:www/rubygem-actionpack50 \
		rubygem-redis-rack>=1:www/rubygem-redis-rack \
		rubygem-redis-store>=1.1.0:devel/rubygem-redis-store

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
