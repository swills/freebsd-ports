# $FreeBSD: head/devel/erlang-lager_syslog/Makefile 423929 2016-10-13 18:26:19Z olgeni $

PORTNAME=	lager_syslog
PORTVERSION=	3.0.3
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Syslog backend for Lager

LICENSE=	APACHE20

USES=		erlang:rebar
USE_GITHUB=	yes
GH_ACCOUNT=	basho

ERL_BUILD_DEPS=	devel/erlang-lager \
		devel/erlang-syslog
RUN_DEPENDS:=	${BUILD_DEPENDS}

.include <bsd.port.mk>
