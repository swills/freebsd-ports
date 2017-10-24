# Created by: lbartoletti <coder@tuxfamily.org>
# $FreeBSD: head/databases/pgrouting/Makefile 452633 2017-10-22 10:57:03Z dbaio $

PORTNAME=	pgrouting
PORTVERSION=	2.5.1
DISTVERSIONPREFIX=	v
CATEGORIES=	databases geography

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Extension to PostGIS to provide geospatial routing functionality

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libboost_system.so:devel/boost-libs\
		libCGAL.so:math/cgal \
		libgmp.so:math/gmp
RUN_DEPENDS=	${LOCALBASE}/share/postgresql/contrib/postgis-2.2/postgis.sql:databases/postgis22

USES=		compiler:c++11-lib cmake:outsource localbase pgsql:9.1+ pkgconfig
USE_LDCONFIG=	yes
USE_GITHUB=	yes
GH_ACCOUNT=	pgRouting

.include <bsd.port.mk>
