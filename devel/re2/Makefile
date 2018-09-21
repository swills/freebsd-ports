# Created by: Julien Laffaye <kimelto@gmail.com>
# $FreeBSD: head/devel/re2/Makefile 479946 2018-09-17 20:02:36Z sunpoet $

PORTNAME=	re2
PORTVERSION=	20180901
CATEGORIES=	devel

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Fast C++ regex library

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/LICENSE

MAKE_ARGS=	CXX="${CXX}" CXXFLAGS="${CXXFLAGS}" SED_INPLACE="${SED} -i ''" prefix=${PREFIX}
USE_LDCONFIG=	yes
USES=		compiler:c++11-lang gmake pathfix

PATHFIX_MAKEFILEIN=	Makefile

GH_ACCOUNT=	google
GH_TAGNAME=	${PORTVERSION:C|(....)(..)(..)|\1-\2-\3|}
USE_GITHUB=	yes

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/lib/libre2.so

.include <bsd.port.mk>
