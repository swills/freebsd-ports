# $FreeBSD: head/devel/erlang-neotoma/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	neotoma
PORTVERSION=	1.7.4
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Erlang library and packrat parser-generator

LICENSE=	MIT

SUB_FILES+=	${PORTNAME}
SUB_LIST+=	PORTNAME=${PORTNAME} \
		PORTVERSION=${PORTVERSION}

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	seancribbs

REBAR_TARGETS=	compile escriptize

OPTIONS_DEFINE=	DOCS

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${ERL_APP_ROOT}
	${INSTALL_SCRIPT} ${WRKDIR}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
