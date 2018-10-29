# $FreeBSD: head/science/maeparser/Makefile 482957 2018-10-25 07:24:36Z yuri $

PORTNAME=	maeparser
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.1
CATEGORIES=	science

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Parser for Schrodinger Maestro files

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BUILD_DEPENDS=	${LOCALBASE}/include/boost/dynamic_bitset.hpp:devel/boost-libs

USES=		cmake:outsource compiler:c++11-lang
USE_GITHUB=	yes
GH_ACCOUNT=	schrodinger
USE_LDCONFIG=	yes

.include <bsd.port.mk>
