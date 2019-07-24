# Created by: loader <loader@freebsdmall.com>
# $FreeBSD$

PORTNAME=	jinput
DISTVERSION=	2.0.9
CATEGORIES=	games java

MAINTAINER=	voidanix@420blaze.it
COMMENT=	Java Game Controller API

BROKEN_armv6=	fails to compile: compilation failed
BROKEN_armv7=	fails to compile: compilation failed

BUILD_DEPENDS=	${JAVALIBDIR}/jutils/jutils.jar:games/jutils \
		mvn:devel/maven
RUN_DEPENDS=	${JAVALIBDIR}/jutils/jutils.jar:games/jutils

USE_GITHUB=	yes
GH_ACCOUNT=	jinput

USE_JAVA=	yes
JAVA_VERSION=	1.6+

NO_ARCH=	yes

MAVEN_ARGS=	-Dmaven.antrun.skip -Dmaven.javadoc.skip -Dmaven.source.skip -Dmaven.test.skip -DskinTests -DskipITs

PLIST_FILES=	${JAVAJARDIR}/${PORTNAME}/${PORTNAME}.jar

do-build:
	cd ${WRKSRC}; \
		${SETENV} mvn --offline -B -P windows,linux,osx,wintab ${MAVEN_ARGS} package

do-install:
	@${MKDIR} ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}
	${INSTALL_DATA} ${WRKSRC}/uberjar/target/${PORTNAME}-${PORTVERSION}-SNAPSHOT.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}/${PORTNAME}.jar

.include <bsd.port.mk>
