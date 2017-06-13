# $FreeBSD: head/www/erlang-mochiweb/Makefile 430593 2017-01-04 20:46:17Z olgeni $

PORTNAME=	mochiweb
PORTVERSION=	2.16.0
DISTVERSIONPREFIX=	v
CATEGORIES=	www devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Erlang library for building lightweight HTTP servers

LICENSE=	MIT

CONFLICTS=	mochiweb-basho-[0-9]*

USES=		cpe erlang:rebar
CPE_VENDOR=	mochiweb_project
USE_GITHUB=	yes
GH_ACCOUNT=	mochi

post-install:
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	cd ${WRKSRC}/examples && ${COPYTREE_SHARE} \* ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
