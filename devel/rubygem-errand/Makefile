# Created by: Brad Davis <brd@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-errand/Makefile 414458 2016-05-02 16:08:56Z zeising $

PORTNAME=	errand
PORTVERSION=	0.8.1
PORTREVISION=	1
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	brd@FreeBSD.org
COMMENT=	Ruby bindings for RRD

RUN_DEPENDS=	rrdtool:databases/rrdtool \
		rubygem-rrd-ffi>=0.2.13:devel/rubygem-rrd-ffi

NO_ARCH=	yes

USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
