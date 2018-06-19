# $FreeBSD: head/devel/elixir-cachex/Makefile 472000 2018-06-08 13:43:25Z olgeni $

PORTNAME=	cachex
PORTVERSION=	3.0.2
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Caching library for Elixir

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	whitfin

MIX_BUILD_DEPS=	devel/elixir-eternal \
		devel/elixir-unsafe
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
