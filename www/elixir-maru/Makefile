# $FreeBSD: head/www/elixir-maru/Makefile 448919 2017-08-29 14:32:48Z olgeni $

PORTNAME=	maru
PORTVERSION=	0.12.3
DISTVERSIONPREFIX=	v
CATEGORIES=	www
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
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
