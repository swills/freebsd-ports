# $FreeBSD: head/converters/rubygem-json-ld-preloaded/Makefile 456361 2017-12-14 20:43:38Z sunpoet $

PORTNAME=	json-ld-preloaded
PORTVERSION=	2.2.3
CATEGORIES=	converters rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	JSON-LD with preloaded contexts

LICENSE=	UNLICENSE

RUN_DEPENDS=	rubygem-json-ld>=2.2:converters/rubygem-json-ld \
		rubygem-multi_json>=1.12:devel/rubygem-multi_json \
		rubygem-rdf>=2.2:www/rubygem-rdf

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
