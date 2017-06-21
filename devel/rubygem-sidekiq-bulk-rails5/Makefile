# $FreeBSD: head/devel/rubygem-sidekiq-bulk-rails5/Makefile 443627 2017-06-15 19:37:40Z jrm $

PORTNAME=	sidekiq-bulk
PORTVERSION=	0.1.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Augment Sidekiq job classes with a push_bulk method

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-sidekiq>=0:devel/rubygem-sidekiq \
		rubygem-activesupport5>=0:devel/rubygem-activesupport5

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
