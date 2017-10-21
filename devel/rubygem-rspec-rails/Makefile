# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-rspec-rails/Makefile 452471 2017-10-19 20:35:41Z sunpoet $

PORTNAME=	rspec-rails
PORTVERSION=	3.7.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Testing framework for Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-actionpack4>=3.0:www/rubygem-actionpack4 \
		rubygem-activesupport4>=3.0:devel/rubygem-activesupport4 \
		rubygem-railties4>=3.0:www/rubygem-railties4 \
		rubygem-rspec-core>=${PORTVERSION:R}:devel/rubygem-rspec-core \
		rubygem-rspec-expectations>=${PORTVERSION:R}:devel/rubygem-rspec-expectations \
		rubygem-rspec-mocks>=${PORTVERSION:R}:devel/rubygem-rspec-mocks \
		rubygem-rspec-support>=${PORTVERSION:R}:devel/rubygem-rspec-support

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
