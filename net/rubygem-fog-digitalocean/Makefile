# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-fog-digitalocean/Makefile 458259 2018-01-06 13:51:03Z sunpoet $

PORTNAME=	fog-digitalocean
PORTVERSION=	0.3.0
PORTREVISION=	1
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for the 'fog' gem to support DigitalOcean

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-fog-core>=1.42:devel/rubygem-fog-core \
		rubygem-fog-json>=1.0:devel/rubygem-fog-json \
		rubygem-fog-xml>=0.1:textproc/rubygem-fog-xml \
		rubygem-ipaddress>=0.5:net/rubygem-ipaddress

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
