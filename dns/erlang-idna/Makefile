# $FreeBSD: head/dns/erlang-idna/Makefile 441977 2017-05-29 08:47:25Z olgeni $

PORTNAME=	idna
PORTVERSION=	5.0.2
CATEGORIES=	dns
PKGNAMEPREFIX=	erlang-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	IDNA implementation in pure Erlang

LICENSE=	MIT

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	benoitc
GH_PROJECT=	${PKGNAMEPREFIX}${PORTNAME}

ERL_BUILD_DEPS= devel/erlang-unicode_util_compat
ERL_RUN_DEPS:=  ${ERL_BUILD_DEPS}

.include <bsd.port.mk>
