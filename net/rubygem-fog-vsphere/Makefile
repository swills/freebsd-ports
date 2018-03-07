# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/net/rubygem-fog-vsphere/Makefile 463572 2018-03-04 16:11:07Z sunpoet $

PORTNAME=	fog-vsphere
PORTVERSION=	2.0.0
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Module for the 'fog' gem to support vSphere

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-fog-core>=0:devel/rubygem-fog-core \
		rubygem-rbvmomi>=1.9:net/rubygem-rbvmomi

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
