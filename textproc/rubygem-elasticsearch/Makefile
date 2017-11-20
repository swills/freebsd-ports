# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-elasticsearch/Makefile 454284 2017-11-15 19:56:50Z sunpoet $

PORTNAME=	elasticsearch
PORTVERSION=	6.0.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby integrations for Elasticsearch

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-elasticsearch-api=${PORTVERSION}:textproc/rubygem-elasticsearch-api \
		rubygem-elasticsearch-transport=${PORTVERSION}:textproc/rubygem-elasticsearch-transport

NO_ARCH=	yes
USE_RUBY=	yes
USES=		gem

.include <bsd.port.mk>
