# $FreeBSD: head/www/elixir-httpotion/Makefile 447596 2017-08-09 08:03:26Z olgeni $

PORTNAME=	httpotion
PORTVERSION=	3.0.3
DISTVERSIONPREFIX=	v
CATEGORIES=	www
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	The HTTP client for Elixir

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	myfreeweb

MIX_BUILD_DEPS=	www/erlang-ibrowse
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
