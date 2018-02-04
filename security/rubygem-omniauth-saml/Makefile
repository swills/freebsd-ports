# Created by: Torsten Zuhlsdorff <ports@toco-domains.de>
# $FreeBSD: head/security/rubygem-omniauth-saml/Makefile 460593 2018-02-01 13:23:52Z sunpoet $

PORTNAME=	omniauth-saml
PORTVERSION=	1.9.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	OmniAuth strategy for SAML

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-omniauth>=1.3.2:security/rubygem-omniauth \
		rubygem-ruby-saml>=1.4.3:security/rubygem-ruby-saml

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
