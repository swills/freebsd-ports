# $FreeBSD: head/devel/elixir-crontab/Makefile 451025 2017-10-01 07:36:02Z olgeni $

PORTNAME=	crontab
PORTVERSION=	1.1.2
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Crontab format parser in Elixir

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	jshmrtn

MIX_BUILD_DEPS=	devel/elixir-timex
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
