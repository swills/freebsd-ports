# $FreeBSD: head/devel/elixir-swarm/Makefile 428274 2016-12-10 09:10:36Z olgeni $

PORTNAME=	swarm
DISTVERSION=	3.0.5
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Clustering, registration, and distribution for Elixir

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	bitwalker

MIX_BUILD_DEPS=	devel/elixir-gen_state_machine \
		devel/elixir-libring \
		devel/elixir-poison
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
