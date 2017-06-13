# Created by: TAKATSU Tomonari <tota@rtfm.jp>
# $FreeBSD: head/www/rubygem-amazon-ecs/Makefile 429943 2016-12-29 19:27:36Z swills $

PORTNAME=	amazon-ecs
PORTVERSION=	2.5.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Generic Amazon E-commerce REST API written in Ruby

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-nokogiri>=1.4:textproc/rubygem-nokogiri \
		rubygem-ruby-hmac>=0.3:security/rubygem-ruby-hmac

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
