# $FreeBSD: head/devel/rubygem-aws-sdk-core/Makefile 479781 2018-09-14 20:36:09Z sunpoet $

PORTNAME=	aws-sdk-core
DISTVERSION=	2.11.130
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
