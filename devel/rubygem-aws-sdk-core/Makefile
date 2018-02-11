# $FreeBSD: head/devel/rubygem-aws-sdk-core/Makefile 461406 2018-02-10 16:21:36Z sunpoet $

PORTNAME=	aws-sdk-core
DISTVERSION=	2.10.129
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	AWS SDK for Ruby - Core

LICENSE=	APACHE20

RUN_DEPENDS=	rubygem-aws-sigv4>=1.0:devel/rubygem-aws-sigv4 \
		rubygem-jmespath>=1.0:devel/rubygem-jmespath

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/aws.rb

.include <bsd.port.mk>
