# $FreeBSD: head/devel/elixir-calendar/Makefile 472000 2018-06-08 13:43:25Z olgeni $

PORTNAME=	calendar
PORTVERSION=	0.17.4
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Date-time and time zone handling in Elixir

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	lau

MIX_BUILD_DEPS=	devel/elixir-tzdata
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
