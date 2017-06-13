# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: head/www/rubygem-sawyer/Makefile 429989 2016-12-30 14:01:14Z swills $

PORTNAME=	sawyer
PORTVERSION=	0.8.1
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Secret User Agent of HTTP

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.md

RUN_DEPENDS=	rubygem-addressable>=2.3.5:www/rubygem-addressable \
		rubygem-faraday>=0.8:www/rubygem-faraday

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
