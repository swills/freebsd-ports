# $FreeBSD: head/devel/elixir-excoveralls/Makefile 492189 2019-02-05 04:06:58Z vanilla $

PORTNAME=	excoveralls
PORTVERSION=	0.10.5
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Coverage Reports for Elixir

LICENSE=	APACHE20

MIX_RUN_DEPS=	devel/elixir-exjsx \
		www/erlang-hackney

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	parroty

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
