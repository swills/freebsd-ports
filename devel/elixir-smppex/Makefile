# $FreeBSD: head/devel/elixir-smppex/Makefile 449156 2017-09-02 17:36:41Z olgeni $

PORTNAME=	smppex
PORTVERSION=	2.0.1
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	SMPP 3.4 library for Elixir

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	savonarola

MIX_BUILD_DEPS=	net/erlang-ranch
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
