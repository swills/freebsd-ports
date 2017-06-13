# $FreeBSD: head/devel/dash.el/Makefile 430183 2017-01-01 00:24:38Z hrs $

PORTNAME=	dash.el
PORTVERSION=	2.13.0
CATEGORIES=	devel elisp

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Modern list library for Emacs

LICENSE=	GPLv3

USE_GITHUB=	yes
GH_ACCOUNT=	magnars
USE_EMACS=	yes
NO_BUILD=	yes
PLIST_FILES=	%%EMACS_SITE_LISPDIR%%/dash.el \
		%%EMACS_SITE_LISPDIR%%/dash-functional.el

do-install:
	cd ${WRKSRC} && ${INSTALL_DATA} ${PLIST_FILES:M*.el:T} \
	    ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}

.include <bsd.port.mk>
