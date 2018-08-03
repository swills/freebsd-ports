# $FreeBSD: head/devel/rubygem-redis-activesupport-rails5/Makefile 476073 2018-07-31 23:49:35Z sunpoet $

PORTNAME=	redis-activesupport
PORTVERSION=	5.0.7
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Redis store for ActiveSupport::Cache

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS?=	rubygem-activesupport5>0:devel/rubygem-activesupport5 \
		rubygem-redis-store>=1.3.0:devel/rubygem-redis-store

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
