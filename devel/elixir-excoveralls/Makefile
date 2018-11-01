# $FreeBSD: head/devel/elixir-excoveralls/Makefile 483667 2018-11-01 13:17:50Z vanilla $

PORTNAME=	excoveralls
PORTVERSION=	0.10.2
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
