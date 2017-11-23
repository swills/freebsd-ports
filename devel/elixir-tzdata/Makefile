# $FreeBSD: head/devel/elixir-tzdata/Makefile 454693 2017-11-22 16:40:51Z olgeni $

PORTNAME=	tzdata
PORTVERSION=	0.5.14
DISTVERSIONPREFIX=	v
CATEGORIES=	devel
PKGNAMEPREFIX=	elixir-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Time zone data for Elixir

LICENSE=	MIT

USES=		elixir
USE_GITHUB=	yes
GH_ACCOUNT=	lau

MIX_BUILD_DEPS=	www/elixir-httpoison \
		www/erlang-hackney
MIX_REWRITE=	yes

post-extract:
	@${RM} ${WRKSRC}/priv/release_ets/.gitkeep

.include <bsd.port.mk>
