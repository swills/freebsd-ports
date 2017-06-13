# $FreeBSD: head/textproc/elasticsearch-plugin-migration/Makefile 431674 2017-01-16 16:03:40Z olgeni $

PORTNAME=	migration
PORTVERSION=	1.19
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc
PKGNAMEPREFIX=	elasticsearch-plugin-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	ElasticSearch Migration Plugin

LICENSE=	APACHE20

RUN_DEPENDS=	elasticsearch>=0.90.9:textproc/elasticsearch

USE_GITHUB=	yes
GH_ACCOUNT=	elastic
GH_PROJECT=	elasticsearch-migration

NO_BUILD=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/elasticsearch/plugins/migration
	cd ${WRKSRC} && ${COPYTREE_SHARE} _site ${STAGEDIR}${PREFIX}/lib/elasticsearch/plugins/migration

.include <bsd.port.mk>
