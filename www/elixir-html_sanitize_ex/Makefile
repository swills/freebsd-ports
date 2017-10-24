# $FreeBSD: head/www/elixir-html_sanitize_ex/Makefile 452615 2017-10-21 21:12:03Z olgeni $

PORTNAME=	html_sanitize_ex
PORTVERSION=	1.3.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	HTML sanitizer for Elixir

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	rrrene

MIX_BUILD_DEPS=	www/erlang-mochiweb
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
