# Created by: Torsten Zuhlsdorff <ports@toco-domains.de>
# $FreeBSD: head/security/rubygem-omniauth-saml/Makefile 463436 2018-03-02 18:52:14Z sunpoet $

PORTNAME=	omniauth-saml
PORTVERSION=	1.10.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	OmniAuth strategy for SAML

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-omniauth>=1.3.2:security/rubygem-omniauth \
		rubygem-ruby-saml>=1.7:security/rubygem-ruby-saml

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
