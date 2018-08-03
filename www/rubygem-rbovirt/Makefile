# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: head/www/rubygem-rbovirt/Makefile 475812 2018-07-29 19:23:26Z sunpoet $

PORTNAME=	rbovirt
PORTVERSION=	0.1.7
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby client for oVirt REST API

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-nokogiri>=0:textproc/rubygem-nokogiri \
		rubygem-rest-client>=1.7.0:www/rubygem-rest-client

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
