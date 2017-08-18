# Created by: lbartoletti <coder@tuxfamily.org>
# $FreeBSD: head/databases/pgrouting/Makefile 448089 2017-08-17 12:16:54Z matthew $

PORTNAME=	pgrouting
PORTVERSION=	2.4.2
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
