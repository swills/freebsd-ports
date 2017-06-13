# Created by: Loïc BARTOLETTI <coder@tuxfamily.org>
# $FreeBSD: head/databases/sfcgal/Makefile 442892 2017-06-07 23:39:22Z dbaio $

PORTNAME=	sfcgal
PORTVERSION=	1.3.1
DISTVERSIONPREFIX=	v
CATEGORIES=	databases math graphics

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	Wrapper library around CGAL for PostGIS

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libCGAL.so:math/cgal \
		libboost_system.so:devel/boost-libs \
		libgmp.so:math/gmp \
		libmpfr.so:math/mpfr

USE_GITHUB=	yes
GH_ACCOUNT=	Oslandia
GH_PROJECT=	SFCGAL

USES=		cmake compiler libtool
compiler_ARGS=	c++0x
USE_LDCONFIG=	yes

.include <bsd.port.mk>
