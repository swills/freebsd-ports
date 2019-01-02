# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/rubygem-webpack-rails-rails50/Makefile 488247 2018-12-23 23:49:24Z mfechner $

PORTNAME=	webpack-rails
PORTVERSION=	0.9.11
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	JavaScript-first tooling to use webpack within your Rails application

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-railties50>=3.2.0:www/rubygem-railties50

# www/gitlab-ce still depends on this port
DEPRECATED=	Upstream no longer maintained, use devel/rubygem-webpacker-rails* instead
EXPIRATION_DATE=2019-07-31

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
