# $FreeBSD: head/devel/elixir-smppex/Makefile 451465 2017-10-07 17:25:07Z olgeni $

PORTNAME=	smppex
PORTVERSION=	2.2.3
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
