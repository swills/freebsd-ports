# $FreeBSD: head/databases/rubygem-active_model_serializers/Makefile 449643 2017-09-11 13:16:38Z sunpoet $

PORTNAME=	active_model_serializers
PORTVERSION=	0.10.6
PORTREVISION=	1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Conventions-based JSON generation for Rails

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-activemodel5>=4.1:databases/rubygem-activemodel5 \
		rubygem-actionpack5>=4.1:www/rubygem-actionpack5 \
		rubygem-case_transform>=0.2:textproc/rubygem-case_transform \
		rubygem-jsonapi-renderer>=0.1.1:devel/rubygem-jsonapi-renderer

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
