# $FreeBSD: head/devel/rubygem-aws-sdk-core/Makefile 468577 2018-04-28 20:10:10Z sunpoet $

PORTNAME=	aws-sdk-core
DISTVERSION=	2.11.39
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	AWS SDK for Ruby - Core

LICENSE=	APACHE20

RUN_DEPENDS=	rubygem-aws-sigv4>=1.0:devel/rubygem-aws-sigv4 \
		rubygem-jmespath>=1.0:devel/rubygem-jmespath

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

PLIST_FILES=	bin/aws.rb

.include <bsd.port.mk>
