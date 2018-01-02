# Created by: Torsten Zuhlsdorff <ports@toco-domains.de>
# $FreeBSD: head/security/rubygem-omniauth-saml/Makefile 457670 2017-12-31 06:25:20Z swills $

PORTNAME=	omniauth-saml
PORTVERSION=	1.8.1
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	OmniAuth strategy for SAML

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-omniauth>=1.3:security/rubygem-omniauth \
		rubygem-ruby-saml>=1.4:security/rubygem-ruby-saml

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
