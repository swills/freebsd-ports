# $FreeBSD: head/devel/elixir-smppex/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	smppex
PORTVERSION=	2.2.7
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	SMPP 3.4 library for Elixir

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	savonarola

MIX_BUILD_DEPS=	net/erlang-ranch
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
