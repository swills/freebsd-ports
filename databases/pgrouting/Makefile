# Created by: lbartoletti <coder@tuxfamily.org>
# $FreeBSD: head/databases/pgrouting/Makefile 449591 2017-09-10 20:55:38Z gerald $

PORTNAME=	pgrouting
PORTVERSION=	2.4.2
PORTREVISION=	1
DISTVERSIONPREFIX=	v
CATEGORIES=	databases geography

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Extension to PostGIS to provide geospatial routing functionality

LICENSE=	GPLv2

LIB_DEPENDS=	libboost_system.so:devel/boost-libs\
		libCGAL.so:math/cgal \
		libgmp.so:math/gmp
RUN_DEPENDS=	${LOCALBASE}/share/postgresql/contrib/postgis-2.2/postgis.sql:databases/postgis22

USES=		compiler:c++11-lib cmake:outsource localbase pgsql:9.1+ pkgconfig
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	pgRouting

.include <bsd.port.mk>
