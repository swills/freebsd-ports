# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-sidekiq/Makefile 484741 2018-11-11 18:22:46Z sunpoet $

PORTNAME=	sidekiq
PORTVERSION=	5.2.3
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Simple, efficient background processing for Ruby

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-connection_pool>=2.2:net/rubygem-connection_pool \
		rubygem-rack-protection>=1.5.0:www/rubygem-rack-protection \
		rubygem-redis>=3.3.5:databases/rubygem-redis

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/sidekiq bin/sidekiqctl

.include <bsd.port.mk>
