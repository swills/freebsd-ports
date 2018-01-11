# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/textproc/elasticsearch5-x-pack/Makefile 458754 2018-01-11 16:24:53Z danfe $

PORTNAME=	x-pack
PORTVERSION=	5.3.0
CATEGORIES=	textproc java
MASTER_SITES=	https://artifacts.elastic.co/downloads/packs/x-pack/
PKGNAMEPREFIX=	elasticsearch5-

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Elasticsearch X-Pack plugins

RUN_DEPENDS:=	elasticsearch5>=5.3.0:textproc/elasticsearch5

NO_BUILD=	yes

USES+=		zip

do-extract:
	@${MKDIR} ${WRKSRC}
	( cd ${WRKDIR} && ${EXTRACT_CMD} ${EXTRACT_BEFORE_ARGS} -d ${PORTNAME}-${PORTVERSION} \
	      ${_DISTDIR}${DISTFILES} )

do-install:
	@cd ${WRKSRC}/elasticsearch && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/lib/elasticsearch/plugins/x-pack

.include <bsd.port.mk>
