# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/www/rubygem-kaminari-rails4/Makefile 427998 2016-12-06 22:15:31Z swills $

PORTNAME=	kaminari
PORTVERSION=	1.1.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails4

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Sophisticated paginator for Rails 4

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

BUILD_DEPENDS=	rubygem-bundler>=1.0.0:sysutils/rubygem-bundler \
		rubygem-capybara>=1.0:devel/rubygem-capybara \
		rubygem-rake>=0:devel/rubygem-rake \
		rubygem-rr>=0:devel/rubygem-rr
RUN_DEPENDS?=	rubygem-activesupport4>=4.1.0:devel/rubygem-activesupport4 \
		rubygem-kaminari-actionview>=1.1.1:www/rubygem-kaminari-actionview \
		rubygem-kaminari-activerecord>=1.1.1:www/rubygem-kaminari-activerecord \
		rubygem-kaminari-core>=1.1.1:www/rubygem-kaminari-core

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
