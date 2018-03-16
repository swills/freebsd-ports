# $FreeBSD: head/www/elixir-phoenix_html/Makefile 463969 2018-03-09 16:02:24Z olgeni $

PORTNAME=	phoenix_html
PORTVERSION=	2.11.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Functions for working with HTML from Phoenix

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	phoenixframework

MIX_BUILD_DEPS=	devel/elixir-plug
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
