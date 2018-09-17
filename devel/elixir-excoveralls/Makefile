# $FreeBSD: head/devel/elixir-excoveralls/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	excoveralls
PORTVERSION=	0.10.0
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
