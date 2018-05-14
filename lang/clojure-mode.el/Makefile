# Created by: Peter Schuller <peter.schuller@infidyne.com>
# $FreeBSD: head/lang/clojure-mode.el/Makefile 469831 2018-05-13 20:55:08Z dbaio $

PORTNAME=	clojure-mode.el
PORTVERSION=	5.7.0
PORTEPOCH=	1
CATEGORIES=	lang elisp
PKGNAMESUFFIX=	${EMACS_PKGNAMESUFFIX}

MAINTAINER=	harrigan-s@outlook.com
COMMENT=	Emacs lisp module for the Clojure language

LICENSE=	GPLv3+

USES=		emacs
USE_GITHUB=	yes
GH_ACCOUNT=	clojure-emacs
GH_PROJECT=	clojure-mode

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
