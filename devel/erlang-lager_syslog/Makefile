# $FreeBSD: head/devel/erlang-lager_syslog/Makefile 479406 2018-09-10 13:14:50Z mat $

PORTNAME=	lager_syslog
PORTVERSION=	3.0.3
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	erlang@FreeBSD.org
COMMENT=	Syslog backend for Lager

LICENSE=	APACHE20

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	basho

ERL_BUILD_DEPS=	devel/erlang-lager \
		devel/erlang-syslog
RUN_DEPENDS:=	${BUILD_DEPENDS}

OPTIONS_DEFINE=	DOCS

.include <bsd.port.mk>
