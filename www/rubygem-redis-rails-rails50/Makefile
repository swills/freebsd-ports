# $FreeBSD: head/www/rubygem-redis-rails-rails50/Makefile 447386 2017-08-05 03:25:17Z jrm $

PORTNAME=	redis-rails
PORTVERSION=	5.0.2
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Redis for Ruby on Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-redis-actionpack-rails50>0:databases/rubygem-redis-actionpack-rails50 \
		rubygem-redis-activesupport-rails50>0:devel/rubygem-redis-activesupport-rails50 \
		rubygem-redis-store>=1.2:devel/rubygem-redis-store

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
