# $FreeBSD: head/devel/epl.el/Makefile 430175 2016-12-31 23:23:15Z hrs $

PORTNAME=	epl.el
PORTVERSION=	0.8
CATEGORIES=	devel elisp

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Emacs Package Library

LICENSE=	GPLv3

USE_GITHUB=	yes
GH_ACCOUNT=	cask
GH_PROJECT=	epl
USE_EMACS=	yes
NO_BUILD=	yes
PLIST_FILES=	%%EMACS_SITE_LISPDIR%%/epl.el

do-install:
	cd ${WRKSRC} && ${INSTALL_DATA} ${PLIST_FILES:M*.el:T} \
	    ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}

.include <bsd.port.mk>
