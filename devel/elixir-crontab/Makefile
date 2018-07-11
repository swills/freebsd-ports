# $FreeBSD: head/devel/elixir-crontab/Makefile 474129 2018-07-07 19:27:06Z olgeni $

PORTNAME=	crontab
PORTVERSION=	1.1.3
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Crontab format parser in Elixir

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	jshmrtn

MIX_BUILD_DEPS=	devel/elixir-timex
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
