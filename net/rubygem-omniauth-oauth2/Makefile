# $FreeBSD: head/net/rubygem-omniauth-oauth2/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	omniauth-oauth2
PORTVERSION=	1.4.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Abstract OAuth2 strategy for OmniAuth

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-oauth2>=1.0:net/rubygem-oauth2 \
		rubygem-omniauth>=1.2:security/rubygem-omniauth

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
