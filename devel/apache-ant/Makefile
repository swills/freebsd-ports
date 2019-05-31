# Created by: Ernst de Haan <znerd@FreeBSD.org>
# $FreeBSD$

PORTNAME=	apache-ant
DISTVERSION=	1.10.6
CATEGORIES=	devel java
MASTER_SITES=	APACHE/ant/source/:src \
		LOCAL/hq:man
DISTFILES=	${ANT_DISTFILE}:src \
		${MANPAGE_DISTFILE}:man

MAINTAINER=	java@FreeBSD.org
COMMENT=	Java- and XML-based build tool, conceptually similar to make

LICENSE=	APACHE20

BUILD_DEPENDS=	${JAVALIBDIR}/junit.jar:java/junit

OPTIONS_DEFINE=	DOCS

ANT_DISTFILE=	${PORTNAME}-${DISTVERSION}-src.tar.xz
MANPAGE_DISTFILE=	${PORTNAME}-manpage-${MANPAGE_VERSION}.tgz
MANPAGE_VERSION=	20030908
USE_JAVA=	yes
PORTDOCS=	*

NO_ARCH=	yes
DATADIR=	${JAVASHAREDIR}/${PORTNAME}

MAKE_ENV+=	JAVA_HOME=${JAVA_HOME:Q}
EXTRACT_AFTER_ARGS=	--exclude '*.p[ly]' --exclude='lib/optional'	\
			--exclude '*.cmd' --exclude '*.bat'
ARGUMENTS=	-Dsystem.jars=${JAVALIBDIR}	\
		-Ddist.dir=${STAGEDIR}${PREFIX}	\
		-Ddist.lib=${STAGEDIR}${DATADIR}/lib	\
		-Ddist.etc=${STAGEDIR}${DATADIR}/etc	\
		-Ddist.manual=${STAGEDIR}${DOCSDIR}

NEWANT=	cd ${WRKSRC:Q} &&	\
	${SETENV} ANT_HOME=${WRKSRC}/bootstrap ${SH} -x	\
		${WRKSRC}/src/script/ant ${ARGUMENTS} --noconfig

do-build:
	cd ${WRKSRC:Q} &&	\
		${SETENV} ${MAKE_ENV} ${SH} -x ./bootstrap.sh	\
			-Dsystem.jars=${JAVALIBDIR}
	${NEWANT} jars

do-install:
	${NEWANT} dist-internal
	@${ECHO_MSG} -n ">> Installing scripts..."
	@${MKDIR} ${STAGEDIR}${DATADIR}/bin
	@${INSTALL_SCRIPT} ${WRKDIR}/ant.sh ${STAGEDIR}${PREFIX}/bin/ant
	-@${MV} ${STAGEDIR}${PREFIX}/bin/antRun ${STAGEDIR}${DATADIR}/bin/
	@${ECHO_MSG} " [ DONE ]"
	@${ECHO_MSG} -n ">> Installing manpages..."
	@${INSTALL_MAN} ${MANPAGE_WRKSRC}/ant.1 ${STAGEDIR}${PREFIX}/man/man1
	@${INSTALL_MAN} ${MANPAGE_WRKSRC}/build.xml.5 ${STAGEDIR}${PREFIX}/man/man5
	@${ECHO_MSG} " [ DONE ]"

test check:
	${NEWANT} -autoproxy test

MANPAGE_WRKSRC=	${WRKDIR}/apache-ant-manpage

SUB_FILES=	ant.sh

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
ARGUMENTS+=	-Djavadoc.verbose=true	\
		-Ddist.base.manual=${STAGEDIR}${DOCSDIR}	\
		-Ddist.javadocs=${STAGEDIR}${DOCSDIR}/api

.else
ARGUMENTS+=	-Djavadoc.notrequired=true	\
		-Dskip_manuals=false

# Be sure, manual/ exists, but is empty if we aren't installing documentation
EXTRACT_AFTER_ARGS+=	--exclude 'manual'
post-extract:
	${MKDIR} ${WRKSRC}/manual
.endif

.include <bsd.port.mk>
