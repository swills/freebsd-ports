# $FreeBSD: head/devel/rubygem-sidekiq-bulk-rails5/Makefile 447386 2017-08-05 03:25:17Z jrm $

PORTNAME=	sidekiq-bulk
PORTVERSION=	0.1.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Augment Sidekiq job classes with a push_bulk method

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-sidekiq>=0:devel/rubygem-sidekiq \
		rubygem-activesupport5>=0:devel/rubygem-activesupport5

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
