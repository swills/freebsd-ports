# $FreeBSD: head/www/rubygem-lograge-rails50/Makefile 466101 2018-03-31 22:48:01Z sunpoet $

PORTNAME=	lograge
PORTVERSION=	0.10.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Tame Rails' multi-line logging into a single line per request #'

LICENSE=	MIT

RUN_DEPENDS=	rubygem-actionpack50>=4:www/rubygem-actionpack50 \
		rubygem-activesupport50>=4:devel/rubygem-activesupport50 \
		rubygem-railties50>=4:www/rubygem-railties50 \
		rubygem-request_store>=1.0:devel/rubygem-request_store

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
