# Created by: Peter Schuller <peter.schuller@infidyne.com>
# $FreeBSD: head/lang/clojure-mode.el/Makefile 449199 2017-09-03 11:11:58Z tobik $

PORTNAME=	clojure-mode.el
PORTVERSION=	5.6.1
PORTEPOCH=	1
CATEGORIES=	lang elisp

MAINTAINER=	harrigan-s@outlook.com
COMMENT=	Emacs lisp module for the Clojure language

LICENSE=	GPLv3

USE_GITHUB=	yes
GH_ACCOUNT=	clojure-emacs
GH_PROJECT=	clojure-mode

USE_EMACS=	yes

NO_ARCH=	yes
NO_BUILD=	yes

do-install:
	${INSTALL_DATA} ${WRKSRC}/clojure-mode.el \
		${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}
	${INSTALL_DATA} ${WRKSRC}/clojure-mode-extra-font-locking.el \
		${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}
	${INSTALL_DATA} ${WRKSRC}/test.clj \
		${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}

.include <bsd.port.mk>
