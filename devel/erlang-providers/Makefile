# $FreeBSD: head/devel/erlang-providers/Makefile 469226 2018-05-06 15:24:05Z olgeni $

PORTNAME=	providers
PORTVERSION=	1.7.0
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Erlang providers library used by relx

LICENSE=	LGPL3

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	tsloughter

ERL_BUILD_DEPS=	devel/erlang-getopt
ERL_RUN_DEPS:=	${ERL_BUILD_DEPS}

.include <bsd.port.mk>
