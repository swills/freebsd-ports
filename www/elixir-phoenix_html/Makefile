# $FreeBSD: head/www/elixir-phoenix_html/Makefile 452412 2017-10-19 10:15:45Z olgeni $

PORTNAME=	phoenix_html
PORTVERSION=	2.10.4
DISTVERSIONPREFIX=	v
CATEGORIES=	www
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Functions for working with HTML from Phoenix

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	phoenixframework

MIX_BUILD_DEPS=	devel/elixir-plug
MIX_RUN_DEPS:=	${MIX_BUILD_DEPS}
MIX_REWRITE=	yes

.include <bsd.port.mk>
