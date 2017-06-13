# Created by: Herve Quiroz <herve.quiroz@esil.univ-mrs.fr>
# $FreeBSD: head/devel/log4j/Makefile 407073 2016-01-24 00:45:03Z amdmi3 $

PORTNAME=	log4j
PORTVERSION=	1.2.17
CATEGORIES=	devel java
MASTER_SITES=	APACHE/logging/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fast and flexible logging library for Java

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

USE_JAVA=	yes
NO_BUILD=	yes
NO_ARCH=	yes

WRKSRC=		${WRKDIR}/apache-${PORTNAME}-${PORTVERSION}

PLIST_FILES=	%%JAVAJARDIR%%/log4j.jar
PORTDOCS=	*
PORTEXAMPLES=	*

OPTIONS_DEFINE=	DOCS EXAMPLES

do-install:
	${INSTALL_DATA} ${WRKSRC}/log4j-${PORTVERSION}.jar ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar

do-install-DOCS-on:
	@cd ${WRKSRC}/site && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}/

do-install-EXAMPLES-on:
	@cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}/
	${RMDIR} ${STAGEDIR}${EXAMPLESDIR}/lf5/OpeningLogFiles

.include <bsd.port.mk>
