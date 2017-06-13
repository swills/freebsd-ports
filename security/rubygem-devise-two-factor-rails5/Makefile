# Created by: Torsten Zuhlsdorff <ports@toco-domains.de>
# $FreeBSD: head/security/rubygem-devise-two-factor-rails5/Makefile 439626 2017-04-28 19:40:28Z jrm $

PORTNAME=	devise-two-factor
PORTVERSION=	3.0.0
CATEGORIES=	security rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	-rails5

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Barebones two-factor authentication with Devise

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-activesupport5>=0:devel/rubygem-activesupport5 \
		rubygem-attr_encrypted>=1.3:security/rubygem-attr_encrypted \
		rubygem-devise-rails5>0:devel/rubygem-devise-rails5 \
		rubygem-railties5>=0:www/rubygem-railties5 \
		rubygem-rotp>=2.0:devel/rubygem-rotp

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
