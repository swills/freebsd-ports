# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-elasticsearch/Makefile 495719 2019-03-14 15:21:11Z sunpoet $

PORTNAME=	elasticsearch
PORTVERSION=	6.2.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby integrations for Elasticsearch

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-elasticsearch-api=${PORTVERSION}:textproc/rubygem-elasticsearch-api \
		rubygem-elasticsearch-transport=${PORTVERSION}:textproc/rubygem-elasticsearch-transport

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
