# Created by: Johannes Meixner <johannes@perceivon.net>
# $FreeBSD: head/devel/rubygem-coffee-rails-rails50/Makefile 447386 2017-08-05 03:25:17Z jrm $

PORTNAME=	coffee-rails
PORTVERSION=	4.2.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Coffee Script adapter for the Rails asset pipeline

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-coffee-script>=2.2.0:devel/rubygem-coffee-script \
		rubygem-railties50>=5.0.0:www/rubygem-railties50

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
