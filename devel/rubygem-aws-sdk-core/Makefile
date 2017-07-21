# $FreeBSD: head/devel/rubygem-aws-sdk-core/Makefile 446274 2017-07-20 17:54:23Z sunpoet $

PORTNAME=	aws-sdk-core
PORTVERSION=	2.10.14
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	AWS SDK for Ruby - Core

LICENSE=	APACHE20

RUN_DEPENDS=	rubygem-aws-sigv4>=1.0:devel/rubygem-aws-sigv4 \
		rubygem-jmespath>=1.0:devel/rubygem-jmespath

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

PLIST_FILES=	bin/aws.rb

.include <bsd.port.mk>
