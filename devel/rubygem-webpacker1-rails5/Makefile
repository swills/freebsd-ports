# $FreeBSD: head/devel/rubygem-webpacker1-rails5/Makefile 443709 2017-06-16 14:59:39Z jrm $

PORTNAME=	webpacker
PORTVERSION=	1.2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	1-rails5

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Use Webpack to manage app-like JavaScript modules in Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activesupport5>0:devel/rubygem-activesupport5 \
		rubygem-multi_json>=1.2:devel/rubygem-multi_json \
		rubygem-railties5>0:www/rubygem-railties5 \
		yarn>0:www/yarn

PORTSCOUT=	limit:^1\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
