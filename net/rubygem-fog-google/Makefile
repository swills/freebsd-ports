# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-fog-google/Makefile 464787 2018-03-17 10:44:39Z sunpoet $

PORTNAME=	fog-google
PORTVERSION=	1.3.3
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for the 'fog' gem to support Google Cloud

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-fog-core>=0:devel/rubygem-fog-core \
		rubygem-fog-json>=0:devel/rubygem-fog-json \
		rubygem-fog-xml>=0:textproc/rubygem-fog-xml \
		rubygem-google-api-client>=0.19.1:devel/rubygem-google-api-client

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
