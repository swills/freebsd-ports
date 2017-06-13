# $FreeBSD: head/databases/erlang-couchbeam/Makefile 430606 2017-01-04 22:35:26Z olgeni $

PORTNAME=	couchbeam
PORTVERSION=	1.4.2
CATEGORIES=	databases
PKGNAMEPREFIX=	erlang-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Apache CouchDB client in Erlang

LICENSE=	MIT

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	benoitc

ERL_BUILD_DEPS=	devel/erlang-jsx \
		www/erlang-hackney
ERL_RUN_DEPS:=  ${ERL_BUILD_DEPS}

.include <bsd.port.mk>
