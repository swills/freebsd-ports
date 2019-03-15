# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/textproc/rubygem-elasticsearch-transport/Makefile 495718 2019-03-14 15:21:06Z sunpoet $

PORTNAME=	elasticsearch-transport
PORTVERSION=	6.2.0
CATEGORIES=	textproc rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby client for Elasticsearch

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

RUN_DEPENDS=	rubygem-faraday>=0:www/rubygem-faraday \
		rubygem-multi_json>=0:devel/rubygem-multi_json

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
