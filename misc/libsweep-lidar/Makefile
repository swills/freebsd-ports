# $FreeBSD: head/misc/libsweep-lidar/Makefile 472693 2018-06-18 14:00:43Z linimon $

PORTNAME=		libsweep-lidar
DISTVERSIONPREFIX=	v
DISTVERSION=		1.3.0
CATEGORIES=		misc

MAINTAINER=		hyun@caffeinated.codes
COMMENT=		Low-level Scanse Sweep LiDAR library

LICENSE=		MIT
LICENSE_FILE=		${WRKSRC}/LICENSE

BROKEN_powerpc64=	fails to compile: unrecognized command line option "-Weverything"

USES=			cmake:outsource
USE_GITHUB=		yes
GH_ACCOUNT=		scanse
GH_PROJECT=		sweep-sdk
CMAKE_SOURCE_PATH=	${WRKSRC}/libsweep
USE_LDCONFIG=		yes

OPTIONS_DEFINE=		NO_DEVICE
NO_DEVICE_DESC=		The library will generate dummy static point cloud
NO_DEVICE_CMAKE_BOOL=	DUMMY

.include <bsd.port.mk>
