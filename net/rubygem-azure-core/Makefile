# Created by: Torsten Zuehlsdorff <tz@FreeBSD.org>
# $FreeBSD: head/net/rubygem-azure-core/Makefile 457413 2017-12-27 19:53:34Z sunpoet $

PORTNAME=	azure-core
PORTVERSION=	0.1.14
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Microsoft Azure Client Core Library for Ruby SDK

LICENSE=	APACHE20

RUN_DEPENDS=	rubygem-faraday>=0.9:www/rubygem-faraday \
		rubygem-faraday_middleware>=0.10:www/rubygem-faraday_middleware \
		rubygem-nokogiri>=1.6:textproc/rubygem-nokogiri

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
