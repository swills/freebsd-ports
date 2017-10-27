# Created by: Torsten Zuehlsdorff <ports@toco-domains.de>
# $FreeBSD: head/net/rubygem-omniauth-azure-oauth2/Makefile 416662 2016-06-10 09:08:02Z tz $

PORTNAME=	omniauth-azure-oauth2
PORTVERSION=	0.0.9
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	tz@FreeBSD.org
COMMENT=	Azure OAuth2 Strategy for OmniAuth

LICENSE=	MIT

BUILD_DEPENDS=	rubygem-rake>=0:devel/rubygem-rake \
		rubygem-rspec>=2.14.0:devel/rubygem-rspec
RUN_DEPENDS=	rubygem-jwt>=1.0:www/rubygem-jwt \
		rubygem-omniauth>=1.0:security/rubygem-omniauth \
		rubygem-omniauth-oauth2>=1.2:net/rubygem-omniauth-oauth2

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
