# $FreeBSD: head/www/rubygem-gon/Makefile 426810 2016-11-22 09:54:04Z tz $

PORTNAME=	gon
PORTVERSION=	6.1.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Framework to pass data to JS easily

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

RUN_DEPENDS=	rubygem-actionpack4>=3.0:www/rubygem-actionpack4 \
		rubygem-json>=0:devel/rubygem-json \
		rubygem-multi_json>=0:devel/rubygem-multi_json \
		rubygem-request_store>=1.0:devel/rubygem-request_store

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
