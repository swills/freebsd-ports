# Created by: KIMURA Yasuhiro <yasu@utahime.org>
# $FreeBSD: head/devel/git-modes/Makefile 458761 2018-01-11 18:09:00Z danfe $

PORTNAME=	git-modes
PORTVERSION=	1.2.6
PORTREVISION=	1
PORTEPOCH=	1
CATEGORIES=	devel elisp
PKGNAMESUFFIX=	-${EMACS_PORT_NAME}

MAINTAINER=	yasu@utahime.org
COMMENT=	GNU Emacs modes for Git-related files

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GITHUB=	yes
GH_ACCOUNT=	magit

USES=		gmake
USE_EMACS=	yes
PORTDOCS=	README.md
NO_ARCH=	yes

ALL_TARGET=	lisp

OPTIONS_DEFINE=	DOCS GIT_SUBVERSION

ELISPDIR=	${EMACS_VERSION_SITE_LISPDIR}/${PORTNAME}
PLIST_SUB=	ELISPDIR=${ELISPDIR}
GIT_SUBVERSION_DESC=		Use devel/git-subversion as backend
GIT_SUBVERSION_RUN_DEPENDS=	git-subversion>0:devel/git-subversion
GIT_SUBVERSION_RUN_DEPENDS_OFF=	git>0:devel/git

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${ELISPDIR}
	${INSTALL_DATA} ${WRKSRC}/*.el ${WRKSRC}/*.elc \
		${STAGEDIR}${PREFIX}/${ELISPDIR}

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
