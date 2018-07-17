# $FreeBSD: head/devel/erlang-gpb/Makefile 474632 2018-07-14 09:22:47Z olgeni $

PORTNAME=	gpb
PORTVERSION=	4.2.1
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

post-install:
	@${MKDIR} ${STAGEDIR}${ERL_APP_ROOT}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/bin/protoc-erl ${STAGEDIR}${ERL_APP_ROOT}/bin
	${INSTALL_SCRIPT} ${WRKDIR}/protoc-erl ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
