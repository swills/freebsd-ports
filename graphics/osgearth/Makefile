# Created by: lbartoletti <coder@tuxfamily.org>
# $FreeBSD: head/graphics/osgearth/Makefile 487272 2018-12-12 01:35:33Z gerald $

PORTNAME=	osgearth
PORTVERSION=	2.10
PORTREVISION=	1
DISTVERSIONPREFIX=	${PORTNAME}-
CATEGORIES=	graphics geography
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

USES=		cmake compiler:c++11-lang gl pkgconfig sqlite

USE_GITHUB=	yes
GH_ACCOUNT=	gwaldron

USE_CXXSTD=	c++11
USE_LDCONFIG=	yes
USE_GL+=	gl glu

CMAKE_ARGS+=	-DCMAKE_INCLUDE_PATH:PATH=${LOCALBASE}/include \
		-DCMAKE_LIBRARY_PATH:PATH=${LOCALBASE}/lib \
		-DLIB_POSTFIX:STRING=""

.include <bsd.port.pre.mk>

.if ${ARCH} == i386
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-i386
.endif

.include <bsd.port.post.mk>
