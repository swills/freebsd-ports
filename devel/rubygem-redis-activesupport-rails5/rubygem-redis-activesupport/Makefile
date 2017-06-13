# $FreeBSD: head/devel/rubygem-redis-activesupport-rails5/rubygem-redis-activesupport/Makefile 436432 2017-03-18 17:13:26Z sunpoet $

PORTNAME=	redis-activesupport
PORTVERSION=	5.0.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Redis store for ActiveSupport::Cache

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS?=	rubygem-activesupport4>=4:devel/rubygem-activesupport4 \
		rubygem-redis-store>=1.3.0:devel/rubygem-redis-store

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
