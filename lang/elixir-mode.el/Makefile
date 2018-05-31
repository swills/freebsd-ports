# $FreeBSD: head/lang/elixir-mode.el/Makefile 471191 2018-05-31 01:18:05Z jrm $

PORTNAME=	elixir-mode.el
DISTVERSIONPREFIX=	v
PORTVERSION=	2.3.1
PORTREVISION=	3
CATEGORIES=	lang
PKGNAMESUFFIX=	${EMACS_PKGNAMESUFFIX}

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Emacs major mode for Elixir

LICENSE=	GPLv3

USES=		emacs
USE_GITHUB=	yes
GH_ACCOUNT=	elixir-lang
GH_PROJECT=	emacs-elixir

NO_ARCH=	yes
NO_BUILD=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}
	${INSTALL_DATA} ${WRKSRC}/*.el ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
