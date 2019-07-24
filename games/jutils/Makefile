# Created by: loader <loader@freebsdmall.com>
# $FreeBSD$

PORTNAME=	jutils
PORTVERSION=	1.0.1
CATEGORIES=	games java

MAINTAINER=	voidanix@420blaze.it
COMMENT=	Common utilities for Java Game Technology Group projects

BUILD_DEPENDS=	mvn:devel/maven

USE_GITHUB=	yes
GH_ACCOUNT=	jinput
GH_TAGNAME=	1d3c539 #no GH release/tag

USE_JAVA=	yes
JAVA_VERSION=	1.6+

PLIST_FILES=	${JAVAJARDIR}/${PORTNAME}/${PORTNAME}.jar
PLIST_DIRS=	${JAVAJARDIR}/${PORTNAME}

do-build:
	cd ${WRKSRC}; \
		${SETENV} mvn --offline -B ${MAVEN_ARGS} package

do-install:
	@${MKDIR} ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/target/${PORTNAME}-${PORTVERSION}-SNAPSHOT.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}/${PORTNAME}.jar

.include <bsd.port.mk>
