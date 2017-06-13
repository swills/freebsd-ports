# $FreeBSD: head/shells/zsh-navigation-tools/Makefile 429653 2016-12-27 20:24:23Z rakuco $

PORTNAME=		zsh-navigation-tools
PORTVERSION=		2.2.7
DISTVERSIONPREFIX=	v
CATEGORIES=		shells

MAINTAINER=		sgniazdowski@gmail.com
COMMENT=		Curses-based tools for Zshell, e.g. multi-word history searcher

LICENSE=		GPLv3 MIT
LICENSE_COMB=		dual
LICENSE_FILE=		${WRKSRC}/LICENSE

RUN_DEPENDS=		zsh:shells/zsh

NO_ARCH=		yes
OPTIONS_DEFINE=		DOCS
SUB_FILES=		pkg-message

USE_GITHUB=		yes
GH_ACCOUNT=		psprint

.include <bsd.port.mk>
