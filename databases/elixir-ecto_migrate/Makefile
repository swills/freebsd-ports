# $FreeBSD: head/databases/elixir-ecto_migrate/Makefile 435209 2017-03-02 06:11:18Z olgeni $

PORTNAME=	ecto_migrate
PORTVERSION=	0.6.3
DISTVERSIONPREFIX=	v
CATEGORIES=	databases
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Automatic migrations for Ecto

LICENSE=	APACHE20

BROKEN=		Does not build with latest Ecto

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	xerions

MIX_BUILD_DEPS=	databases/elixir-ecto
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
