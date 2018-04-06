# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-flipper-active_support_cache_store013/Makefile 466581 2018-04-05 19:11:55Z sunpoet $

PORTNAME=	flipper-active_support_cache_store
PORTVERSION=	0.13.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	013

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	ActiveSupport::Cache store adapter for Flipper

LICENSE=	MIT

RUN_DEPENDS=	rubygem-activesupport4>=3.2:devel/rubygem-activesupport4 \
		rubygem-flipper013>=${PORTVERSION}:devel/rubygem-flipper013

PORTSCOUT=	limit:^0\.13\.

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
