# $FreeBSD$

PORTNAME=	http
PORTVERSION=	0.9.8
CATEGORIES=	www rubygems
MASTER_SITES=	RG
PKGNAMESUFFIX=	098

MAINTAINER=	idefix@fechner.net
COMMENT=	Simple Ruby DSL for making HTTP requests

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-addressable23>=2.3:www/rubygem-addressable23 \
		rubygem-http-cookie>=1.0:www/rubygem-http-cookie \
		rubygem-http-form_data>=2.0.0:www/rubygem-http-form_data \
		rubygem-http_parser.rb>=0.6.0:net/rubygem-http_parser.rb

PORTSCOUT=	limit=^0\.9\.8

NO_ARCH=	yes
USES=		gem
USE_RUBY=	yes

.include <bsd.port.mk>
