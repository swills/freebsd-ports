# $FreeBSD: head/net/rubygem-omniauth-oauth2/Makefile 456367 2017-12-14 20:44:10Z sunpoet $

PORTNAME=	omniauth-oauth2
PORTVERSION=	1.5.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Abstract OAuth2 strategy for OmniAuth

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-oauth2>=1.1:net/rubygem-oauth2 \
		rubygem-omniauth>=1.2:security/rubygem-omniauth

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
