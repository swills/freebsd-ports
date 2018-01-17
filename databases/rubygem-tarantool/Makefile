# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/databases/rubygem-tarantool/Makefile 459051 2018-01-15 14:38:59Z swills $

PORTNAME=	tarantool
PORTVERSION=	0.5.8
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	vg@FreeBSD.org
COMMENT=	Tarantool KV-storage client

RUN_DEPENDS=	rubygem-bin_utils>=0.0.3:devel/rubygem-bin_utils \
		rubygem-iproto>=0.3:net/rubygem-iproto \
		rubygem-murmurhash3>=0.1.1:devel/rubygem-murmurhash3 \
		rubygem-sumbur>=0.0.2:devel/rubygem-sumbur

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
