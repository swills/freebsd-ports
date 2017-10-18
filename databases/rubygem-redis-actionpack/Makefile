# $FreeBSD: head/databases/rubygem-redis-actionpack/Makefile 452294 2017-10-17 20:07:07Z sunpoet $

PORTNAME=	redis-actionpack
PORTVERSION=	5.0.2
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Redis session store for ActionPack

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-actionpack4>=4.0:www/rubygem-actionpack4 \
		rubygem-redis-rack1>=1:www/rubygem-redis-rack1 \
		rubygem-redis-store>=1.1.0:devel/rubygem-redis-store

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
