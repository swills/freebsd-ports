# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-elasticsearch-transport/Makefile 465376 2018-03-23 16:45:24Z sunpoet $

PORTNAME=	elasticsearch-transport
PORTVERSION=	6.0.2
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby client for Elasticsearch

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-faraday>=0:www/rubygem-faraday \
		rubygem-multi_json>=0:devel/rubygem-multi_json

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
