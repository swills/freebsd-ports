# $FreeBSD: head/textproc/erlang-fast_xml/Makefile 450805 2017-09-28 08:12:07Z olgeni $

PORTNAME=	fast_xml
PORTVERSION=	1.1.24
CATEGORIES=	textproc
PKGNAMEPREFIX=	erlang-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Erlang XML parsing and manipulation library

LICENSE=	APACHE20

LIB_DEPENDS=	libexpat.so:textproc/expat2

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	processone

ERL_BUILD_DEPS=	textproc/erlang-p1_utils
ERL_RUN_DEPS:=	${ERL_BUILD_DEPS}

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -l expat

pre-install:
	${STRIP_CMD} ${WRKSRC}/priv/lib/*.so

.include <bsd.port.mk>
