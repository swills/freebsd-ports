# Created by: Jean-Yves Lefort <jylefort@FreeBSD.org>
# $FreeBSD: head/lang/csharp-mode.el/Makefile 471191 2018-05-31 01:18:05Z jrm $

PORTNAME=	csharp-mode.el
PORTVERSION=	0.9.0
DISTVERSIONPREFIX=	v
PORTREVISION=	3
CATEGORIES=	lang elisp
PKGNAMESUFFIX=	${EMACS_PKGNAMESUFFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Emacs major mode for editing C\# source code

LICENSE=	GPLv2

USES=		emacs
USE_GITHUB=	yes
GH_ACCOUNT=	josteink
GH_PROJECT=	csharp-mode

NO_ARCH=	yes
NO_BUILD=	yes

PLIST_FILES=	${EMACS_SITE_LISPDIR}/csharp-mode.el

do-install:
	${INSTALL_DATA} ${WRKSRC}/csharp-mode.el \
		${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}

.include <bsd.port.mk>
