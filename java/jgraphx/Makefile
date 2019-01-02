# $FreeBSD$

PORTNAME=	jgraphx
DISTVERSIONPREFIX=	v
DISTVERSION=	3.9.12
CATEGORIES=	java graphics

MAINTAINER=	makc@FreeBSD.org
COMMENT=	The Java Graph Diagram Component version X (jgraph v6+)

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/license.txt

USE_GITHUB=	yes
GH_ACCOUNT=	jgraph
USE_JAVA=	yes
USE_ANT=	yes

PLIST_FILES=	%%JAVAJARDIR%%/${PORTNAME}.jar

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

do-build:
	@(cd ${BUILD_WRKSRC}; \
		${SETENV} ${MAKE_ENV} ${ANT} ${MAKE_ARGS} ${ALL_TARGET})

do-install:
	${INSTALL_DATA} ${WRKSRC}/lib/${PORTNAME}.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/docs && ${COPYTREE_SHARE} \* ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
