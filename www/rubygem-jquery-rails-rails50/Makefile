# Created by: Jason Helfman <jgh@FreeBSD.org>
# $FreeBSD: head/www/rubygem-jquery-rails-rails50/Makefile 468009 2018-04-22 08:57:39Z sunpoet $

PORTNAME=	jquery-rails
PORTVERSION=	4.3.3
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Provides a Rails generator for jQuery

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-rails-dom-testing-rails50>=1.0:textproc/rubygem-rails-dom-testing-rails50 \
		rubygem-railties50>=4.2.0:www/rubygem-railties50 \
		rubygem-thor>=0.14:devel/rubygem-thor

BROKEN_powerpc64=	fails to install: pkg-static: rubygem-rails-dom-testing-2.0.3 conflicts with rubygem-rails-dom-testing-rails50-2.0.3 (installs files into the same place)

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
