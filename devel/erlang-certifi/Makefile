# $FreeBSD: head/devel/erlang-certifi/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	erlang-certifi
PORTVERSION=	1.2.1
CATEGORIES=	devel

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	CA bundle for Erlang applications

BUILD_DEPENDS=	gmake:devel/gmake

LICENSE=	BSD3CLAUSE

USES=		erlang:rebar3
USE_GITHUB=	yes
GH_ACCOUNT=	certifi

ERL_APP_NAME=	certifi

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
