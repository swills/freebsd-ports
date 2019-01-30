# $FreeBSD: head/net/rubygem-omniauth-authentiq/Makefile 471002 2018-05-27 20:17:50Z sunpoet $

PORTNAME=	omniauth-authentiq
PORTVERSION=	0.3.3
PORTREVISION=	1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Authentiq OAuth2 Strategy for OmniAuth

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-jwt>=1.5:www/rubygem-jwt \
		rubygem-omniauth-oauth2>=1.5:net/rubygem-omniauth-oauth2

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
