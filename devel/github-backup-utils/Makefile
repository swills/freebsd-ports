# Created by: Ryan Steinmetz <zi@FreeBSD.org>
# $FreeBSD: head/devel/github-backup-utils/Makefile 432263 2017-01-23 17:55:43Z zi $

PORTNAME=	github-backup-utils
PORTVERSION=	2.8.3
DISTVERSIONPREFIX=	v
CATEGORIES=	devel

MAINTAINER=	zi@FreeBSD.org
COMMENT=	GitHub Enterprise Backup Utilities

LICENSE=	MIT

RUN_DEPENDS=	git>0:devel/git \
		rsync>0:net/rsync

USE_GITHUB=	yes
GH_ACCOUNT=	github
GH_PROJECT=	backup-utils
SUB_FILES=	pkg-message
NO_BUILD=	yes

post-patch:
	${REINPLACE_CMD} -e \
		's|/etc/github-backup-utils/backup.config|${PREFIX}/etc/github.backup.config|g' \
		${WRKSRC}/share/${PORTNAME}/ghe-backup-config

do-install:
	(cd ${WRKSRC}/bin && ${COPYTREE_BIN} . ${STAGEDIR}${PREFIX}/bin)
	(cd ${WRKSRC}/share/${PORTNAME} && ${COPYTREE_BIN} . ${STAGEDIR}${DATADIR})
	${INSTALL_DATA} ${WRKSRC}/backup.config-example \
		${STAGEDIR}${PREFIX}/etc/github.backup.config.sample

.include <bsd.port.mk>
