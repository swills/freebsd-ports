# $FreeBSD: head/databases/elixir-mongo/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	elixir-mongo
PORTVERSION=	0.5.4
CATEGORIES=	databases

MAINTAINER=	vanilla@FreeBSD.org
COMMENT=	Database driver for MongoDB written in Elixir

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	checkiz

ELIXIR_APP_NAME=mongo

MIX_BUILD_DEPS=	devel/elixir-bson
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
