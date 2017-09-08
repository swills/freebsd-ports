# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-sprockets-rails-rails5/Makefile 449073 2017-09-01 10:51:19Z sunpoet $

PORTNAME=	sprockets-rails
PORTVERSION=	3.2.1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Sprockets Rails integration

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS?=	rubygem-actionpack5>0:www/rubygem-actionpack5 \
		rubygem-activesupport5>0:devel/rubygem-activesupport5 \
		rubygem-sprockets3>=3.0.0:devel/rubygem-sprockets3

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
