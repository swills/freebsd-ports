# $FreeBSD: head/lang/elixir-mode.el/Makefile 449697 2017-09-12 15:38:56Z ashish $

PORTNAME=	elixir-mode.el
PORTVERSION=	2.3.1
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	lang

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Emacs major mode for Elixir

LICENSE=	GPLv3

USE_GITHUB=	yes
GH_ACCOUNT=	elixir-lang
GH_PROJECT=	emacs-elixir

USE_EMACS=	yes
NO_BUILD=	yes

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}
	${INSTALL_DATA} ${WRKSRC}/*.el ${STAGEDIR}${PREFIX}/${EMACS_SITE_LISPDIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/*.md ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
