# $FreeBSD: head/devel/erlang-parse_trans/Makefile 452323 2017-10-18 10:55:41Z olgeni $

PORTNAME=	parse_trans
PORTVERSION=	3.1.0
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Parse transform utilities for Erlang

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	uwiger

ERL_DOCS=	doc/*

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/examples/* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
