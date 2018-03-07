# Created by: Veniamin Gvozdikov <vg@FreeBSD.org>
# $FreeBSD: head/databases/rubygem-tarantool/Makefile 463318 2018-03-01 13:35:41Z sunpoet $

PORTNAME=	tarantool
PORTVERSION=	0.5.8
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Tarantool KV-storage client

LICENSE=	BSD2CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-bin_utils>=0.0.3:devel/rubygem-bin_utils \
		rubygem-iproto>=0.3.17:net/rubygem-iproto \
		rubygem-murmurhash3>=0.1.1:devel/rubygem-murmurhash3 \
		rubygem-sumbur>=0.0.2:devel/rubygem-sumbur

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
