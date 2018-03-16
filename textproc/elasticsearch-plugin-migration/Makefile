# $FreeBSD: head/textproc/elasticsearch-plugin-migration/Makefile 464084 2018-03-10 17:46:04Z gerald $

PORTNAME=	migration
PORTVERSION=	1.19
PORTREVISION=	1
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
