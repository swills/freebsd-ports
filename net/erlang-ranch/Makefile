# $FreeBSD: head/net/erlang-ranch/Makefile 479407 2018-09-10 13:15:47Z mat $

PORTNAME=	ranch
PORTVERSION=	1.3.2
CATEGORIES=	net
PKGNAMEPREFIX=	erlang-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Erlang socket acceptor pool for TCP protocols

LICENSE=	ISCL

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	ninenines
ERL_DOCS=	doc/src/guide/* doc/src/manual/*

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install-EXAMPLES-on:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/examples && ${COPYTREE_SHARE} . ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
