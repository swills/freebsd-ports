# Created by: Tom Judge <tj@FreeBSD.org>
# $FreeBSD: head/textproc/kibana5-x-pack/Makefile 437844 2017-04-06 01:33:55Z tj $

PORTNAME=	x-pack
PORTVERSION=	5.3.0
CATEGORIES=	textproc java
MASTER_SITES=	https://artifacts.elastic.co/downloads/packs/x-pack/
PKGNAMEPREFIX=	kibana5-

MAINTAINER=	tj@FreeBSD.org
COMMENT=	Kibana 5.0 X-Pack plugins


RUN_DEPENDS:=	kibana5>=5.3.0:textproc/kibana5

NO_BUILD=	yes

USES+=		zip

do-extract:
	@${MKDIR} ${WRKSRC}
	( cd ${WRKDIR} && ${EXTRACT_CMD} ${EXTRACT_BEFORE_ARGS} -d ${PORTNAME}-${PORTVERSION} \
	      ${_DISTDIR}${DISTFILES} )

do-install:
	@cd ${WRKSRC}/kibana && ${COPYTREE_SHARE} . ${STAGEDIR}${PREFIX}/www/kibana5/plugins

.include <bsd.port.mk>
