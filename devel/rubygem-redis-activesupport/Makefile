# $FreeBSD: head/devel/rubygem-redis-activesupport/Makefile 445526 2017-07-11 17:02:58Z sunpoet $

PORTNAME=	redis-activesupport
PORTVERSION=	5.0.3
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
