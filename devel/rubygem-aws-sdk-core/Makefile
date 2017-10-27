# $FreeBSD: head/devel/rubygem-aws-sdk-core/Makefile 452882 2017-10-25 18:29:19Z sunpoet $

PORTNAME=	aws-sdk-core
PORTVERSION=	2.10.71
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	AWS SDK for Ruby - Core

LICENSE=	APACHE20

RUN_DEPENDS=	rubygem-aws-sigv4>=1.0:devel/rubygem-aws-sigv4 \
		rubygem-jmespath>=1.0:devel/rubygem-jmespath

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

PLIST_FILES=	bin/aws.rb

.include <bsd.port.mk>
