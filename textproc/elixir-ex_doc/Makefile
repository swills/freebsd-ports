# $FreeBSD: head/textproc/elixir-ex_doc/Makefile 441687 2017-05-25 13:42:28Z olgeni $

PORTNAME=	ex_doc
PORTVERSION=	0.16.0
DISTVERSIONPREFIX=	v
CATEGORIES=	textproc
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Tool to generate documentation for Elixir projects

LICENSE=	APACHE20 MIT
LICENSE_COMB=	multi

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	elixir-lang

MIX_BUILD_DEPS=	textproc/elixir-earmark
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
