# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-fog-openstack/Makefile 479127 2018-09-06 18:24:13Z sunpoet $

PORTNAME=	fog-openstack
PORTVERSION=	0.2.1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for the 'fog' gem to support OpenStack clouds

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-fog-core1>=1.45.0:devel/rubygem-fog-core1 \
		rubygem-fog-json102>=1.0:devel/rubygem-fog-json102 \
		rubygem-ipaddress>=0.8:net/rubygem-ipaddress

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
