# Created by: Mikhail T. <michael@fun-box.ru>
# $FreeBSD$

PORTNAME=	netty
PORTVERSION=	4.1.10
DISTVERSIONSUFFIX=	.Final
CATEGORIES=	java devel
MASTER_SITES=	http://dl.bintray.com/netty/downloads/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Java NIO client server framework

LICENSE=	APACHE20

USE_JAVA=	yes
USES=		cpe tar:bzip2
CPE_VENDOR=	netty_project
JAVA_VERSION=	1.6+
NO_BUILD=	yes
DATADIR=	${PREFIX}/share/${PKGBASE}
DOCSDIR=	${PREFIX}/share/doc/${PKGBASE}
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}.Final

PORTDATA=	*
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

do-install:
	@${MKDIR} ${STAGEDIR}${JAVAJARDIR}
	${INSTALL_DATA} ${WRKSRC}/jar/all-in-one/${PORTNAME}-all-${PORTVERSION}.Final.jar \
		${STAGEDIR}${JAVAJARDIR}/${PORTNAME}-${PORTVERSION}.jar
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/jar/all-in-one/${PORTNAME}-all-${PORTVERSION}.Final-sources.jar \
		${STAGEDIR}${DATADIR}
	unzip -d ${STAGEDIR}${DOCSDIR} \
		${WRKSRC}/javadoc/${PORTNAME}-all-${PORTVERSION}.Final-javadoc.jar
	${LN} -nfs netty-${PORTVERSION}.jar ${STAGEDIR}${JAVAJARDIR}/netty.jar

.include <bsd.port.mk>
