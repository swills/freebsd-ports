# $FreeBSD: head/devel/erlang-folsom/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	folsom
PORTVERSION=	0.8.3
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Erlang based metrics system inspired by Coda Hale's metrics

LICENSE=	APACHE20

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	puzza007

ERL_BUILD_DEPS=	devel/erlang-bear
ERL_RUN_DEPS:=	${ERL_BUILD_DEPS}

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
