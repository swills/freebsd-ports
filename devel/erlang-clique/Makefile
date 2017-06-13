# $FreeBSD: head/devel/erlang-clique/Makefile 435410 2017-03-04 14:28:35Z olgeni $

PORTNAME=	clique
PORTVERSION=	0.3.9
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	CLI Framework for Erlang

LICENSE=	APACHE20

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	basho

ERL_BUILD_DEPS=	devel/erlang-cuttlefish
ERL_RUN_DEPS:=	${ERL_BUILD_DEPS}

.include <bsd.port.mk>
