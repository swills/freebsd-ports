# Created by: rfarmer@predatorlabs.net
# $FreeBSD$

PORTNAME=	jlatexmath
PORTVERSION=	1.0.7
CATEGORIES=	math java
MASTER_SITES=	LOCAL/yuri/:maven
DISTFILES=	FreeBSD-${PORTNAME}-${PORTVERSION}-maven-repository.tar.gz:maven

MAINTAINER=	makc@FreeBSD.org
COMMENT=	Java API to display mathematical formulas written in LaTeX

LICENSE=	GPLv2

BUILD_DEPENDS=	mvn:devel/maven

USE_GITHUB=	yes
GH_ACCOUNT=	opencollab
USE_JAVA=	yes
JAVA_BUILD=	yes
JAVA_RUN=	yes

OPTIONS_DEFINE=	FOP EXAMPLES
OPTIONS_DEFAULT=	FOP
OPTIONS_SUB=	yes

FOP_DESC=		textproc/fop plugin (required for math/scilab)
FOP_BUILD_DEPENDS=	fop:textproc/fop \
			${JAVALIBDIR}/xmlgraphics-commons.jar:graphics/xmlgraphics-commons
FOP_RUN_DEPENDS:=	${FOP_BUILD_DEPENDS} \
			batik>0:graphics/batik \
			${JAVALIBDIR}/avalon-framework.jar:devel/avalon-framework \
			${JAVALIBDIR}/commons-io.jar:devel/jakarta-commons-io \
			${JAVALIBDIR}/commons-logging.jar:java/jakarta-commons-logging \
			${JAVALIBDIR}/xml-apis-ext.jar:textproc/xml-commons
FOP_ALL_TARGET=		fop

PORTEXAMPLES=	*

do-build:
	@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} \
		${LOCALBASE}/bin/mvn --offline \
		-fae install \
		-Dmaven.test.skip=true \
		-Duser.home=${WRKDIR}

pre-install:
# Remove empty directory
	-${RMDIR} ${WRKSRC}/examples/Macros/bin

do-install:
	${INSTALL_DATA} ${WRKSRC}/jlatexmath/target/jlatexmath-${PORTVERSION}.jar ${STAGEDIR}${JAVAJARDIR}/jlatexmath.jar
	${INSTALL_DATA} ${WRKSRC}/jlatexmath-font-cyrillic/target/jlatexmath-font-cyrillic-${PORTVERSION}.jar ${STAGEDIR}${JAVAJARDIR}/jlatexmath-font-cyrillic.jar
	${INSTALL_DATA} ${WRKSRC}/jlatexmath-font-greek/target/jlatexmath-font-greek-${PORTVERSION}.jar ${STAGEDIR}${JAVAJARDIR}/jlatexmath-font-greek.jar

do-install-EXAMPLES-on:
	(cd ${WRKSRC}/jlatexmath/src/test/java/org/scilab/forge/jlatexmath/examples && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR})

do-install-FOP-on:
	${INSTALL_DATA} ${WRKSRC}/jlatexmath-fop/target/jlatexmath-fop-${PORTVERSION}.jar ${STAGEDIR}${JAVAJARDIR}/jlatexmath-fop.jar

.include <bsd.port.mk>
