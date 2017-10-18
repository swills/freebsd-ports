# $FreeBSD: head/www/rubygem-redis-rack/Makefile 452306 2017-10-17 20:08:10Z sunpoet $

PORTNAME=	redis-rack
PORTVERSION=	2.0.3
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Redis Store for Rack

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-rack>=1.5:www/rubygem-rack \
		rubygem-redis-store>=1.2:devel/rubygem-redis-store

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/appraisal bin/rake

.include <bsd.port.mk>
