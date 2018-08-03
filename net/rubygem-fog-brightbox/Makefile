# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-fog-brightbox/Makefile 475797 2018-07-29 19:22:10Z sunpoet $

PORTNAME=	fog-brightbox
PORTVERSION=	0.15.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for the 'fog' gem to support Brightbox Cloud

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-fog-core1>=1.22:devel/rubygem-fog-core1 \
		rubygem-fog-json>=0:devel/rubygem-fog-json \
		rubygem-inflecto>=0.0.2:devel/rubygem-inflecto \
		rubygem-mime-types>=0:misc/rubygem-mime-types

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
