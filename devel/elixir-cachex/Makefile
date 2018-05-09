# $FreeBSD: head/devel/elixir-cachex/Makefile 469330 2018-05-07 19:50:20Z olgeni $

PORTNAME=	cachex
PORTVERSION=	3.0.2
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
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
