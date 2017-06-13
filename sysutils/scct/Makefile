# $FreeBSD: head/sysutils/scct/Makefile 423195 2016-10-03 13:44:27Z jrm $

PORTNAME=	scct
PORTVERSION=	0.1
CATEGORIES=	sysutils

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	Simple Cluster_SSH Clone using Tmux

LICENSE=	BSD2CLAUSE

RUN_DEPENDS=	tmux:sysutils/tmux

NO_ARCH=	yes
NO_BUILD=	yes

USE_GITHUB=	yes
GH_ACCOUNT=	Jehops

PLIST_FILES=	bin/scct
PORTDOCS=	README.org

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/scct ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.org ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
