# Created by: Conor McDermottroe <ports@mcdermottroe.com>
# $FreeBSD$

PORTNAME=	jflex
PORTVERSION=	1.8.1
CATEGORIES=	java devel

MASTER_SITES=	https://github.com/jflex-de/jflex/releases/download/v${PORTVERSION}/
LICENSE=	BSD3CLAUSE

MAINTAINER=	eg@fbsd.lt
COMMENT=	The Fast Lexical Analyser Generator for Java[tm]

USE_JAVA=	yes

#
# JFlex has two build options --- Maven and Bazel --- and neither of
# them are easy within the Ports tree framework.  If you *really* want
# to build it from source, grab the distfile (which includes the source)
# or the entire repo, and have fun!     -- ~jashankj, 2020-04-08
#
NO_BUILD=	yes

OPTIONS_DEFINE=	DOCS EXAMPLES
SUB_FILES=	jflex.sh

do-install:
	${INSTALL_SCRIPT} ${WRKDIR}/jflex.sh ${STAGEDIR}${PREFIX}/bin/jflex
	${INSTALL_DATA} ${WRKSRC}/lib/${PORTNAME}-full-${PORTVERSION}.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}-${PORTVERSION}.jar
	${LN} -s ${PORTNAME}-${PORTVERSION}.jar ${STAGEDIR}${JAVAJARDIR}/${PORTNAME}.jar

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${COPYTREE_SHARE} ${WRKSRC}/doc/* ${STAGEDIR}${DOCSDIR}

do-install-EXAMPLES-on:
	${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${COPYTREE_SHARE} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
