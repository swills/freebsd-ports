# $FreeBSD: head/devel/elixir-eternal/Makefile 472000 2018-06-08 13:43:25Z olgeni $

PORTNAME=	eternal
PORTVERSION=	1.2.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Elixir supervisor for ETS tables

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	whitfin

MIX_BUILD_DEPS=	devel/elixir-deppie
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
