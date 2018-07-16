# $FreeBSD$

PORTNAME=	kafka
PORTVERSION=	1.1.0
CATEGORIES=	net java
MASTER_SITES=	APACHE/${PORTNAME}/${PORTVERSION}
DISTNAME=	${PORTNAME}-${PORTVERSION}-src

MAINTAINER=	timp87@gmail.com
COMMENT=	Distributed streaming platform

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	gradle>=3.0:devel/gradle
RUN_DEPENDS=	bash:shells/bash

USES=		tar:tgz shebangfix

SHEBANG_FILES=	bin/*.sh

OPTIONS_DEFINE=	DOCS

USERS=		kafka
GROUPS=		kafka

DATADIR=	${JAVASHAREDIR}/${PORTNAME}
KAFKA_DATADIR=	/var/db/${PORTNAME}
KAFKA_LOGDIR=	/var/log/${PORTNAME}
KAFKA_RUNDIR=	/var/run/${PORTNAME}
# Consult with releaseTarGz gradle task
KAFKA_LIBDIRS=	core tools connect/api connect/runtime connect/transforms connect/json \
		connect/file streams streams/examples
KAFKA_CONFIGS=	connect-console-sink.properties \
		connect-console-source.properties \
		connect-distributed.properties connect-file-sink.properties \
		connect-file-source.properties connect-log4j.properties \
		connect-standalone.properties consumer.properties \
		log4j.properties producer.properties server.properties \
		tools-log4j.properties

SUB_FILES=	kafka
SUB_LIST=	JAVA=${JAVA} \
		ETCDIR=${ETCDIR} \
		USERS=${USERS} \
		GROUPS=${GROUPS} \
		KAFKA_RUNDIR=${KAFKA_RUNDIR} \
		KAFKA_LOGDIR=${KAFKA_LOGDIR}

PLIST_SUB=	PORTVERSION=${PORTVERSION} \
		USERS=${USERS} \
		GROUPS=${GROUPS} \
		KAFKA_DATADIR=${KAFKA_DATADIR} \
		KAFKA_RUNDIR=${KAFKA_RUNDIR} \
		KAFKA_LOGDIR=${KAFKA_LOGDIR} \
		ETCDIR=${ETCDIR}

NO_ARCH=	yes
USE_JAVA=	yes
JAVA_VERSION=	1.7+
JAVA_RUN=	yes
USE_RC_SUBR=	kafka

GRADLE_OPTS=	--no-daemon --parallel --max-workers=${MAKE_JOBS_NUMBER} --gradle-user-home=${WRKDIR}/gradle-home

pre-patch:
	@${RM} -rf ${WRKSRC}/bin/windows ${WRKSRC}/bin/zookeeper-server-start.sh \
	${WRKSRC}/bin/zookeeper-server-stop.sh ${WRKSRC}/bin/zookeeper-shell.sh

do-patch:
	@${REINPLACE_CMD} "s|JAVA=\"java\"|JAVA=\"${JAVA}\"|" ${WRKSRC}/bin/kafka-run-class.sh
	@${REINPLACE_CMD} "/LOG_DIR=/s|\$$base_dir/logs|${KAFKA_LOGDIR}|" ${WRKSRC}/bin/kafka-run-class.sh
	@${REINPLACE_CMD} "s|\$$base_dir.*/config|${ETCDIR}|" ${WRKSRC}/bin/*.sh
	@${REINPLACE_CMD} "s|ps ax|ps axww|" ${WRKSRC}/bin/kafka-server-stop.sh
	@${REINPLACE_CMD} "/log.dirs/s|=.*|=${KAFKA_DATADIR}|" ${WRKSRC}/config/server.properties

do-build:
	@cd ${WRKSRC} && \
		gradle ${GRADLE_OPTS} && \
		./gradlew ${GRADLE_OPTS} jar

do-install:
	${MKDIR} ${STAGEDIR}${ETCDIR}
	${MKDIR} ${STAGEDIR}${KAFKA_DATADIR}
	${MKDIR} ${STAGEDIR}${KAFKA_LOGDIR}
	${MKDIR} ${STAGEDIR}${KAFKA_RUNDIR}
	${MKDIR} ${STAGEDIR}${DATADIR}/bin
	${MKDIR} ${STAGEDIR}${DATADIR}/libs
	${INSTALL_SCRIPT} ${WRKSRC}/bin/*.sh ${STAGEDIR}${DATADIR}/bin/
.for d in ${KAFKA_LIBDIRS}
	${INSTALL_DATA} ${WRKSRC}/${d}/build/libs/* ${WRKSRC}/${d}/build/dependant-libs*/* ${STAGEDIR}${DATADIR}/libs/
.endfor
.for f in ${KAFKA_CONFIGS}
	${INSTALL_DATA} ${WRKSRC}/config/${f} ${STAGEDIR}${ETCDIR}/${f}.sample
.endfor

do-install-DOCS-on:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	cd ${WRKSRC}/docs && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
