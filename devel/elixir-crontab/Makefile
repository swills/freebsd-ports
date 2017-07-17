# $FreeBSD: head/devel/elixir-crontab/Makefile 445541 2017-07-11 18:15:37Z olgeni $

PORTNAME=	crontab
PORTVERSION=	1.1.1
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
