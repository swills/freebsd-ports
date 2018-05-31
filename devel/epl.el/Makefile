# $FreeBSD: head/devel/epl.el/Makefile 471191 2018-05-31 01:18:05Z jrm $

PORTNAME=	epl.el
PORTVERSION=	0.8
PORTREVISION=	3
CATEGORIES=	devel elisp
PKGNAMESUFFIX=	${EMACS_PKGNAMESUFFIX}

MAINTAINER=	hrs@FreeBSD.org
COMMENT=	Emacs Package Library

LICENSE=	GPLv3

USES=		emacs
USE_GITHUB=	yes
GH_ACCOUNT=	cask
GH_PROJECT=	epl

NO_BUILD=	yes
PLIST_FILES=	${EMACS_SITE_LISPDIR}/epl.el

do-install:
	(cd ${WRKSRC} && ${INSTALL_DATA} ${PLIST_FILES:M*.el:T} \
	    ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR})

.include <bsd.port.mk>
