# $FreeBSD: head/math/bsdnt/Makefile 412348 2016-04-01 14:16:16Z mat $

PORTNAME=	bsdnt
PORTVERSION=	1.0
CATEGORIES=	math

MAINTAINER=	swills@FreeBSD.org
COMMENT=	Bignum Library

LICENSE=	BSD3CLAUSE

BUILD_DEPENDS=	bash:shells/bash

USES=		gmake shebangfix
SHEBANG_FILES=	configure
USE_GITHUB=	yes
GH_ACCOUNT=	wbhart
GH_TAGNAME=	72e20a7

USE_LDCONFIG=	yes

do-configure:
	@cd ${WRKSRC}; ${SETENV} ${MAKE_ENV} ./configure --prefix=${STAGEDIR}${PREFIX} CC=cc CXX=c++ AS=cc

.include <bsd.port.mk>
