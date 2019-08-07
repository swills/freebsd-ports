# Created by: Dusan Vejnovic <freebsd@dussan.org>
# $FreeBSD$

PORTNAME=	sonar-scanner-cli
PORTVERSION=	3.3.0.1492
PORTREVISION=	1
CATEGORIES=	devel java
MASTER_SITES=	https://binaries.sonarsource.com/Distribution/${PORTNAME}/
DISTNAME=	sonar-scanner-cli-${PORTVERSION}

MAINTAINER=	freebsd@dussan.org
COMMENT=	Launcher for analyzing projects with SonarQube

LICENSE=	LGPL3

NO_ARCH=	yes
NO_BUILD=	yes

USES=		cpe zip
CPE_VENDOR=	sonarsource

USE_JAVA=	yes
JAVA_VERSION=	1.8

SS_HOME=	${PREFIX}/${PORTNAME}
SS_CLI=		sonar-scanner
SS_ARCH=	x86-${ARCH:S/i386/32/:S/amd64/64/}
SS=		${PREFIX}/sonarqube/bin/freebsd-${SS_ARCH}

SUB_FILES=	pkg-message
PLIST_SUB=      SS_HOME=${SS_HOME}
WRKSRC=		${WRKDIR}/${SS_CLI}-${PORTVERSION}

do-install:
	@${MKDIR} ${STAGEDIR}${SS_HOME}
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} . ${STAGEDIR}${SS_HOME})
	@${MV} -f ${STAGEDIR}${SS_HOME}/conf/${SS_CLI}.properties \
	 ${STAGEDIR}${SS_HOME}/conf/${SS_CLI}.properties.sample

post-install:
	@(cd ${STAGEDIR} && ${LN} -sf ${SS_HOME}/bin/${SS_CLI} ${PREFIX}/bin/${SS_CLI})

.include <bsd.port.mk>
