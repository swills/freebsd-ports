# $FreeBSD: head/www/rubygem-redis-rails/Makefile 437974 2017-04-07 23:17:10Z sunpoet $

PORTNAME=	redis-rails
PORTVERSION=	5.0.2
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Redis for Ruby on Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-redis-actionpack>=5.0:databases/rubygem-redis-actionpack \
		rubygem-redis-activesupport>=5.0:devel/rubygem-redis-activesupport \
		rubygem-redis-store>=1.2:devel/rubygem-redis-store

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
