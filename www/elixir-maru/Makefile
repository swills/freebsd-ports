# $FreeBSD: head/www/elixir-maru/Makefile 472000 2018-06-08 13:43:25Z olgeni $

PORTNAME=	maru
PORTVERSION=	0.12.4
DISTVERSIONPREFIX=	v
CATEGORIES=	www
PKGNAMEPREFIX=	elixir-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Elixir RESTful framework

LICENSE=	BSD3CLAUSE

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	falood

MIX_BUILD_DEPS=	devel/elixir-plug \
		devel/elixir-poison \
		www/erlang-cowboy
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}

.include <bsd.port.mk>
