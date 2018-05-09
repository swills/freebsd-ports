# $FreeBSD: head/devel/erlang-erlware_commons/Makefile 469228 2018-05-06 15:31:43Z olgeni $

PORTNAME=	erlware_commons
PORTVERSION=	1.1.0
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Erlang project focused on all aspects of reusable components

LICENSE=	MIT

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	erlware

ERL_BUILD_DEPS= devel/erlang-cf
ERL_RUN_DEPS:=  ${ERL_BUILD_DEPS}

.include <bsd.port.mk>
