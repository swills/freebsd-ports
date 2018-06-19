# $FreeBSD: head/devel/erlang-parse_trans/Makefile 472000 2018-06-08 13:43:25Z olgeni $

PORTNAME=	parse_trans
PORTVERSION=	3.2.0
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Parse transform utilities for Erlang

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	uwiger

ERL_DOCS=	doc/*

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
