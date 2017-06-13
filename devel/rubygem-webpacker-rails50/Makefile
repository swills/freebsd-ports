# $FreeBSD: head/devel/rubygem-webpacker-rails50/Makefile 441646 2017-05-25 02:06:33Z jrm $

PORTNAME=	webpacker
PORTVERSION=	1.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Use Webpack to manage app-like JavaScript modules in Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport50>0:devel/rubygem-activesupport50 \
		rubygem-multi_json>=1.2:devel/rubygem-multi_json \
		rubygem-railties50>0:www/rubygem-railties50 \
		yarn>0:www/yarn

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
