# $FreeBSD: head/sysutils/zap/Makefile 448263 2017-08-18 17:41:09Z jrm $

PORTNAME=	zap
PORTVERSION=	0.7.1
CATEGORIES=	sysutils

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Maintain and replicate ZFS snapshots

LICENSE=	BSD2CLAUSE

NO_ARCH=	yes
NO_BUILD=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	Jehops

PLIST_FILES=	bin/zap man/man1/zap.1.gz
PORTDOCS=	README.org

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/zap ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/zap.1 ${STAGEDIR}${PREFIX}/man/man1
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PORTDOCS} ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
