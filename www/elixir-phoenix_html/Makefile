# $FreeBSD: head/www/elixir-phoenix_html/Makefile 467470 2018-04-16 09:54:08Z olgeni $

PORTNAME=	phoenix_html
PORTVERSION=	2.11.2
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
