# $FreeBSD: head/devel/elixir-plug/Makefile 452413 2017-10-19 10:19:02Z olgeni $

PORTNAME=	plug
PORTVERSION=	1.4.3
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Composable modules for Elixir web applications

LICENSE=	APACHE20

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	elixir-lang

MIX_BUILD_DEPS=	misc/elixir-mime
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
