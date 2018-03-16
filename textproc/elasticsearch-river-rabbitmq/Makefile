# $FreeBSD: head/textproc/elasticsearch-river-rabbitmq/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	rabbitmq
PORTVERSION=	2.6.0
PORTREVISION=	2
CATEGORIES=	textproc
MASTER_SITES=	http://download.elasticsearch.org/elasticsearch/elasticsearch-river-rabbitmq/
PKGNAMEPREFIX=	elasticsearch-river-
DISTNAME=	${PKGNAMEPREFIX}${PORTNAME}-${PORTVERSION}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	ElasticSearch RabbitMQ River

LICENSE=	APACHE20

RUN_DEPENDS=	elasticsearch>=1.6.0:textproc/elasticsearch

USES=		zip

NO_BUILD=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/elasticsearch/plugins/river-rabbitmq
	${INSTALL_DATA} ${WRKDIR}/*.jar ${STAGEDIR}${PREFIX}/lib/elasticsearch/plugins/river-rabbitmq

.include <bsd.port.mk>
