# $FreeBSD: head/devel/erlang-goldrush/Makefile 472000 2018-06-08 13:43:25Z olgeni $

PORTNAME=	goldrush
PORTVERSION=	0.1.9
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Fast event stream processing library for Erlang

LICENSE=	ISCL

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	DeadZen

post-build:
	@${RM} -r ${WRKSRC}/priv

.include <bsd.port.mk>
