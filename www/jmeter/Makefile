# $FreeBSD$

PORTNAME=	apache-jmeter
PORTVERSION=	5.1.1
PORTREVISION=	1
CATEGORIES=	www benchmarks java
MASTER_SITES=	APACHE/jmeter/binaries

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	Functional behaviour load and performance test application

LICENSE=	APACHE20

USES=		tar:tgz
USE_JAVA=	yes

JAVA_VERSION=	1.8+
NO_BUILD=	yes
NO_ARCH=	yes
DATADIR=	${JAVASHAREDIR}/${PORTNAME}
SUB_FILES=	jmeter.sh
DATAFILES=	bin extras lib
# Do not even extract the MS-DOS files nor the JARs,
# that are already provided by other ports:
EXTRACT_AFTER_ARGS=	--exclude '*.bat' --exclude '*.cmd'

OPTIONS_DEFINE=	DOCS

PORTDOCS=	docs extras printable_docs README.md LICENSE NOTICE

do-install:
	cd ${WRKSRC} \
	  && ${FIND} ${DATAFILES} -type d -exec ${MKDIR} ${STAGEDIR}/${DATADIR}/{} \;
	cd ${WRKSRC} \
	  && ${FIND} ${DATAFILES} -type f -not -name '*.orig' -exec ${INSTALL} {} ${STAGEDIR}${DATADIR}/{} \;
	cd ${WRKSRC} \
	  && ${FIND} ${PORTDOCS} -type d -exec ${MKDIR} ${STAGEDIR}${DOCSDIR}/{} \;
	cd ${WRKSRC} \
	  && ${FIND} ${PORTDOCS} -type f -exec ${INSTALL_DATA} {} ${STAGEDIR}${DOCSDIR}/{} \;
	${INSTALL_SCRIPT} ${WRKDIR}/jmeter.sh ${STAGEDIR}${PREFIX}/bin/jmeter

.include <bsd.port.mk>
