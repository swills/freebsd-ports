# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/security/rubygem-omniauth-cas3/Makefile 495163 2019-03-09 14:38:21Z sunpoet $

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

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
