# $FreeBSD: head/security/elixir-comeonin_i18n/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	comeonin_i18n
PORTVERSION=	0.1.3
DISTVERSIONPREFIX=	v
CATEGORIES=	security
PKGNAMEPREFIX=	elixir-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Internationalization support for Comeonin

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	riverrun

MIX_BUILD_DEPS=	devel/elixir-gettext
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
