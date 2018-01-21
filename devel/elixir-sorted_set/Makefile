# $FreeBSD: head/devel/elixir-sorted_set/Makefile 459422 2018-01-19 14:44:40Z olgeni $

PORTNAME=	sorted_set
PORTVERSION=	1.1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Sorted Set library for Elixir

LICENSE=	MIT

IGNORE=		does not build with Elixir 1.3
DEPRECATED=	No longer maintained upstream
EXPIRATION_DATE=2018-02-18

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	SenecaSystems

MIX_BUILD_DEPS=	devel/elixir-red_black_tree
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
