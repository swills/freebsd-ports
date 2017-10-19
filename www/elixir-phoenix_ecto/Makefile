# $FreeBSD: head/www/elixir-phoenix_ecto/Makefile 452411 2017-10-19 10:15:30Z olgeni $

PORTNAME=	phoenix_ecto
PORTVERSION=	3.3.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Ecto integration for the Phoenix framework

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	phoenixframework

MIX_BUILD_DEPS=	databases/elixir-ecto \
		devel/elixir-plug \
		devel/elixir-poison \
		www/elixir-phoenix_html
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
