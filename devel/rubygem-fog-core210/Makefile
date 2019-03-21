# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-fog-core/Makefile 464313 2018-03-12 21:16:48Z sunpoet $

PORTNAME=	fog-core
PORTVERSION=	2.1.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	210

MAINTAINER=	mfechner@FreeBSD.org
COMMENT=	Shared classes and tests for fog providers and services

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-builder>=0:devel/rubygem-builder \
		rubygem-excon>=0.58:devel/rubygem-excon \
		rubygem-formatador>=0.2:devel/rubygem-formatador \
		rubygem-mime-types>=0:misc/rubygem-mime-types

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
