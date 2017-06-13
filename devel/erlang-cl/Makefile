# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: head/devel/erlang-cl/Makefile 429810 2016-12-28 18:07:58Z amdmi3 $

PORTNAME=	cl
PORTVERSION=	1.2.3
DISTVERSIONPREFIX=	cl-
CATEGORIES=	devel
PKGNAMEPREFIX=	erlang-

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	OpenCL binding for Erlang

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/COPYRIGHT

BUILD_DEPENDS=	opencl>=0:devel/opencl

USE_GITHUB=	yes
GH_ACCOUNT=	tonyrog

USES=		gmake erlang:rebar3 localbase

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-build:
	@${RMDIR} ${WRKSRC}/priv

.include <bsd.port.mk>
