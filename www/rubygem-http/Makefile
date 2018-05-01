# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/rubygem-http/Makefile 468471 2018-04-27 15:57:52Z sunpoet $

PORTNAME=	http
PORTVERSION=	3.3.0
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Simple Ruby DSL for making HTTP requests

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-addressable>=2.3:www/rubygem-addressable \
		rubygem-http-cookie>=1.0:www/rubygem-http-cookie \
		rubygem-http-form_data>=2.0:www/rubygem-http-form_data \
		rubygem-http_parser.rb>=0.6.0:net/rubygem-http_parser.rb

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
