# $FreeBSD: head/devel/elixir-conform_exrm/Makefile 409895 2016-03-01 19:29:40Z olgeni $

PORTNAME=	conform_exrm
PORTVERSION=	1.0.0
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Conform plugin for ExRM

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	bitwalker

MIX_BUILD_DEPS=	devel/elixir-conform \
		devel/elixir-exrm
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}

.include <bsd.port.mk>
