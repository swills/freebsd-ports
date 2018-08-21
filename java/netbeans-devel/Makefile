# Created by: gahr
# $FreeBSD$

PORTNAME=	netbeans
DISTVERSION=	9.0
CATEGORIES=	java devel
MASTER_SITES=	http://mirrors.sonic.net/apache/incubator/netbeans/incubating-netbeans-java/incubating-${DISTVERSION}/

PKGNAMEPREFIX=	incubating-
PKGNAMESUFFIX=	-devel
DISTNAME=	${PKGNAMEPREFIX}${PORTNAME}-java-${DISTVERSION}-${DISTVERSIOM}bin

MAINTAINER=	kwm@FreeBSD.org
COMMENT=	Full-featured integrated environment for Java

LICENSE=	APACHE20

USES=		shebangfix zip
SHEBANG_FILES=	extide/ant/bin/antRun.pl \
		extide/ant/bin/complete-ant-cmd.pl \
		extide/ant/bin/runant.pl \
		extide/ant/bin/runant.py

perl_OLD_CMD=	/usr/bin/perl
perl_CMD=	${LOCALBASE}/bin/perl
python_OLD_CMD=	/usr/bin/python
python_CMD=	${LOCALBASE}/bin/python2.7

USE_JAVA=	yes
JAVA_VERSION=	1.9+
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}
PREFIXDIR=	${PREFIX}/${PORTNAME}-${PORTVERSION}

PLIST_SUB+=	PORTVERSION=${PORTVERSION}

DESKTOP_ENTRIES="NetBeans9" \
		"NetBeans9 IDE" \
		${DATADIR}/nb/netbeans.png \
		${PORTNAME}-${PORTVERSION} \
		"Development;" \
		false
post-patch:
	@${REINPLACE_CMD} -i "" -e '57s|#||;57s|/path/to/jdk|${JAVA_HOME}|' \
	    ${WRKSRC}/etc/netbeans.conf
	@${FIND} ${WRKSRC} -name "*.orig" -delete

do-install:
	cd ${WRKSRC} && ${COPYTREE_SHARE} \* ${STAGEDIR}${DATADIR}
	${CHMOD} ${BINMODE} ${STAGEDIR}${DATADIR}/bin/netbeans
	${LN} -sf ${DATADIR}/bin/netbeans ${STAGEDIR}${PREFIX}/bin/${PORTNAME}-${PORTVERSION}

	${FIND} ${STAGEDIR}${DATADIR} -type f -ipath "*/bin/*" | ${XARGS} ${CHMOD} ${BINMODE}

.include <bsd.port.mk>
