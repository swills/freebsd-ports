# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/security/rubygem-omniauth-cas3/Makefile 441015 2017-05-16 18:18:25Z sunpoet $

PORTNAME=	omniauth-cas3
PORTVERSION=	1.1.4
CATEGORIES=	security rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	CAS 3.0 Strategy for OmniAuth

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-addressable>=2.3:www/rubygem-addressable \
		rubygem-nokogiri>=1.7.1:textproc/rubygem-nokogiri \
		rubygem-omniauth>=1.2:security/rubygem-omniauth

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
