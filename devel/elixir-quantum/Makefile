# $FreeBSD: head/devel/elixir-quantum/Makefile 449620 2017-09-11 09:02:01Z olgeni $

PORTNAME=	quantum
PORTVERSION=	2.1.0
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Cron-like job scheduler for Elixir

LICENSE=	APACHE20

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	c-rack
GH_PROJECT=	quantum-elixir

ELIXIR_APP_NAME=quantum
MIX_BUILD_DEPS=	devel/elixir-calendar \
		devel/elixir-crontab \
		devel/elixir-gen_stage \
		devel/elixir-timex
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
