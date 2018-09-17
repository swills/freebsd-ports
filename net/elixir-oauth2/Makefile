# $FreeBSD: head/net/elixir-oauth2/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	oauth2
PORTVERSION=	0.9.2
DISTVERSIONPREFIX=	v
CATEGORIES=	net
PKGNAMEPREFIX=	elixir-

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	OAuth 2.0 library for Elixir

LICENSE=	MIT

MIX_BUILD_DEPS=	devel/elixir-plug \
		www/erlang-hackney

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	scrogson
NO_ARCH=	yes

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
