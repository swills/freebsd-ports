# Created by: Janos Mohacsi <janos.mohacsi@bsd.hu>
# $FreeBSD$

PORTNAME=	denyhosts
PORTVERSION=	2.6
PORTREVISION=	8
CATEGORIES=	security
MASTER_SITES=	SF
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	DenyHosts-${PORTVERSION}

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Script to thwart ssh attacks

LICENSE=	GPLv2

USES=		cpe python shebangfix
USE_PYTHON=	autoplist distutils
USE_RC_SUBR=	denyhosts

REINPLACE_ARGS=	-i ''
CPE_VENDOR=	phil_schwartz
NO_ARCH=	yes

OPTIONS_DEFINE=	DOCS

PORTDOCS=	CHANGELOG.txt LICENSE.txt README.txt
SUB_FILES=	pkg-message
SUB_LIST=	PYTHON=${PYTHON_CMD}

SHEBANG_LANG=	env
SHEBANG_FILES=	daemon-control-dist \
		plugins/test_deny.py \
		scripts/restricted_from_invalid.py \
		scripts/restricted_from_passwd.py
env_OLD_CMD=	/bin/env
env_CMD=	${SETENV}

.include <bsd.port.pre.mk>
pre-build:
.if ${PYTHON_REL} >= 3000
	@${LOCALBASE}/bin/2to3-${PYTHON_VER} --no-diffs --nobackups --verbose --write \
		${WRKSRC}/
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|%%PREFIX%%|${PREFIX}|' ${WRKSRC}/daemon-control-dist ${WRKSRC}/denyhosts.cfg-dist ${WRKSRC}/setup.py
	@${FIND} ${WRKSRC} -type f -name '*.bak' -o -name '*.orig' -delete

post-install:
	${INSTALL_DATA} ${WRKSRC}/denyhosts.cfg-dist ${STAGEDIR}${PREFIX}/etc/denyhosts.conf.sample
	${MKDIR} ${STAGEDIR}${DOCSDIR}/
	cd ${WRKSRC}/ && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.post.mk>
