# $FreeBSD: head/devel/rubygem-redis-activesupport-rails50/Makefile 441641 2017-05-25 01:54:39Z jrm $

PORTNAME=	redis-activesupport
PORTVERSION=	5.0.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Redis store for ActiveSupport::Cache

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS?=	rubygem-activesupport50>0:devel/rubygem-activesupport50 \
		rubygem-redis-store>=1.3.0:devel/rubygem-redis-store

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
