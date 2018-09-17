# $FreeBSD: head/devel/elixir-coverex/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	coverex
PORTVERSION=	1.4.15
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Coverage Reports for Elixir

LICENSE=	APACHE20

MIX_BUILD_DEPS=	devel/elixir-poison \
		www/elixir-httpoison

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	alfert

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
