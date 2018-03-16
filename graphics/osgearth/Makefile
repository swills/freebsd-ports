# Created by: lbartoletti <coder@tuxfamily.org>
# $FreeBSD: head/graphics/osgearth/Makefile 464405 2018-03-13 20:10:33Z amdmi3 $

PORTNAME=	osgearth
PORTVERSION=	2.9
DISTVERSIONPREFIX=	${PORTNAME}-
PORTREVISION=	1
CATEGORIES=	graphics geography

MAINTAINER=	lbartoletti@tuxfamily.org
COMMENT=	C++ terrain rendering toolkit for OpenSceneGraph

LICENSE=	LGPL3
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

LIB_DEPENDS=	libosg.so:graphics/osg \
		libgdal.so:graphics/gdal \
		libcurl.so:ftp/curl \
		libgeos.so:graphics/geos \
		libleveldb.so:databases/leveldb \
		libPocoUtil.so:devel/poco \
		libprotoc.so:devel/protobuf \
		librocksdb.so:databases/rocksdb

USES=		cmake pkgconfig sqlite

USE_GITHUB=	yes
GH_ACCOUNT=	gwaldron

USE_LDCONFIG=	yes
USE_GL+=	gl glu
PLIST_SUB=	OSGVERSION=3.4.0

CMAKE_ARGS+=	-DCMAKE_INCLUDE_PATH:PATH=${LOCALBASE}/include \
		-DCMAKE_LIBRARY_PATH:PATH=${LOCALBASE}/lib \
		-DLIB_POSTFIX:STRING=""

.include <bsd.port.mk>
