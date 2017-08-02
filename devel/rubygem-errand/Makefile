# Created by: Brad Davis <brd@FreeBSD.org>
# $FreeBSD: head/devel/rubygem-errand/Makefile 446934 2017-07-30 13:23:00Z sunpoet $

PORTNAME=	errand
PORTVERSION=	0.8.1
PORTREVISION=	2
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	brd@FreeBSD.org
COMMENT=	Ruby bindings for RRD

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENCE

RUN_DEPENDS=	rrdtool:databases/rrdtool \
		rubygem-rrd-ffi>=0.2.13:devel/rubygem-rrd-ffi

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
