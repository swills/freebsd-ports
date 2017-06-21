# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: head/lang/php-mode.el/Makefile 443863 2017-06-19 08:12:27Z knu $

PORTNAME=	php-mode.el
PORTVERSION=	1.18.2
DISTVERSIONPREFIX=	v
CATEGORIES=	lang elisp

MAINTAINER=	knu@FreeBSD.org
COMMENT=	PHP mode for GNU Emacs

LICENSE=	GPLv3

USE_GITHUB=	yes
GH_ACCOUNT=	ejmr
GH_PROJECT=	${PORTNAME:S/.el$//}

NO_BUILD=	yes
NO_ARCH=	yes
PLIST_FILES=	share/emacs/site-lisp/php-mode.el

do-install:
	${INSTALL_DATA} ${WRKSRC}/php-mode.el ${STAGEDIR}${PREFIX}/share/emacs/site-lisp/php-mode.el

.include <bsd.port.mk>
