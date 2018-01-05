# $FreeBSD: head/net/rubygem-omniauth-google-oauth2/Makefile 457889 2018-01-02 15:34:29Z sunpoet $

PORTNAME=	omniauth-google-oauth2
PORTVERSION=	0.5.2
PORTREVISION=	1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Google OAuth2 strategy for OmniAuth 1.x

LICENSE=	MIT

RUN_DEPENDS=	rubygem-jwt>=1.5.2:www/rubygem-jwt \
		rubygem-multi_json>=1.3:devel/rubygem-multi_json \
		rubygem-omniauth>=1.1.1:security/rubygem-omniauth \
		rubygem-omniauth-oauth2>=1.3.1:net/rubygem-omniauth-oauth2

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
