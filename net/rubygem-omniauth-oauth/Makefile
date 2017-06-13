# $FreeBSD: head/net/rubygem-omniauth-oauth/Makefile 414136 2016-04-27 21:57:31Z swills $

PORTNAME=	omniauth-oauth
PORTVERSION=	1.1.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Generic OAuth strategy for OmniAuth

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-oauth>=0:net/rubygem-oauth \
		rubygem-omniauth>=1.0:security/rubygem-omniauth

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
