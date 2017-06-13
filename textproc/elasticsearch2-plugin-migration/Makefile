# $FreeBSD: head/textproc/elasticsearch2-plugin-migration/Makefile 433794 2017-02-10 14:57:38Z olgeni $

PORTNAME=	migration
PORTVERSION=	2.0.4
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc
PKGNAMEPREFIX=	elasticsearch2-plugin-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	ElasticSearch Migration Plugin

LICENSE=	APACHE20

RUN_DEPENDS=	elasticsearch2>=2.3.0:textproc/elasticsearch2

USE_GITHUB=	yes
GH_ACCOUNT=	elastic
GH_PROJECT=	elasticsearch-migration

NO_ARCH=	yes
NO_BUILD=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/elasticsearch/plugins/migration
	cd ${WRKSRC} && ${COPYTREE_SHARE} _site ${STAGEDIR}${PREFIX}/lib/elasticsearch/plugins/migration
	${INSTALL_DATA} ${WRKSRC}/*.properties ${STAGEDIR}${PREFIX}/lib/elasticsearch/plugins/migration

.include <bsd.port.mk>
