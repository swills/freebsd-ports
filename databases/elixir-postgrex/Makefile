# $FreeBSD: head/databases/elixir-postgrex/Makefile 442269 2017-06-01 02:13:00Z olgeni $

PORTNAME=	postgrex
PORTVERSION=	0.13.3
DISTVERSIONPREFIX=	v
CATEGORIES=	databases
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Database driver for PostgreSQL written in Elixir

LICENSE=	APACHE20

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	elixir-ecto

MIX_BUILD_DEPS=	databases/elixir-db_connection \
		devel/elixir-connection \
		devel/elixir-decimal
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
