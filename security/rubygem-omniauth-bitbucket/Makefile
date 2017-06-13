# $FreeBSD: head/security/rubygem-omniauth-bitbucket/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	omniauth-bitbucket
PORTVERSION=	0.0.2
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	OmniAuth strategy for Bitbucket

LICENSE=	MIT

RUN_DEPENDS=	rubygem-multi_json>=1.7:devel/rubygem-multi_json \
		rubygem-omniauth>=1.1:security/rubygem-omniauth \
		rubygem-omniauth-oauth>=1.0:net/rubygem-omniauth-oauth

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
