# $FreeBSD: head/devel/rubygem-webpacker1-rails5/Makefile 448248 2017-08-18 15:57:48Z sunpoet $

PORTNAME=	webpacker
PORTVERSION=	1.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	1-rails5

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Use Webpack to manage app-like JavaScript modules in Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport5>0:devel/rubygem-activesupport5 \
		rubygem-multi_json>=1.2:devel/rubygem-multi_json \
		rubygem-railties5>0:www/rubygem-railties5 \
		yarn>0:www/yarn

DEPRECATED=	Use devel/rubygem-webpacker-rails5 instead
EXPIRATION_DATE=2017-08-31

PORTSCOUT=	limit:^1\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
