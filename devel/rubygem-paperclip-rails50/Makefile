# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-paperclip-rails50/Makefile 476064 2018-07-31 23:48:45Z sunpoet $

PORTNAME=	paperclip
PORTVERSION=	6.1.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails50

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Easy upload management for ActiveRecord

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	ImageMagick7-nox11>=0:graphics/ImageMagick7-nox11 \
		rubygem-activemodel50>0:databases/rubygem-activemodel50 \
		rubygem-activesupport50>=0:devel/rubygem-activesupport50 \
		rubygem-mimemagic>=0.3.0:misc/rubygem-mimemagic \
		rubygem-mime-types>=0:misc/rubygem-mime-types \
		rubygem-terrapin>=0.6.0:devel/rubygem-terrapin

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
