# $FreeBSD: head/devel/erlang-gpb/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	gpb
PORTVERSION=	4.3.2
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Google Protobuf implementation for Erlang

LICENSE=	LGPL21

SUB_FILES+=	protoc-erl
SUB_LIST+=	PORTNAME=${PORTNAME} \
		PORTVERSION=${PORTVERSION}

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	tomas-abrahamsson

OPTIONS_DEFINE=	DOCS

post-install:
	@${MKDIR} ${STAGEDIR}${ERL_APP_ROOT}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/bin/protoc-erl ${STAGEDIR}${ERL_APP_ROOT}/bin
	${INSTALL_SCRIPT} ${WRKDIR}/protoc-erl ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
