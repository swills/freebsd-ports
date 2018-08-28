# $FreeBSD: head/devel/erlang-gpb/Makefile 478022 2018-08-25 11:15:22Z olgeni $

PORTNAME=	gpb
PORTVERSION=	4.2.2
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
