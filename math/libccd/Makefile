# $FreeBSD: head/math/libccd/Makefile 488341 2018-12-25 20:25:39Z tcberner $

PORTNAME=	libccd
DISTVERSIONPREFIX=	v
DISTVERSION=	2.1
CATEGORIES=	math

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	Library for collision detection between two convex shapes

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/BSD-LICENSE

USES=		cmake
USE_GITHUB=	yes
GH_ACCOUNT=	danfis
USE_LDCONFIG=	yes

OPTIONS_DEFINE=	DOUBLE_PECISION

DOUBLE_PECISION_DESC=		Enable double precision computations
DOUBLE_PECISION_CMAKE_BOOL=	ENABLE_DOUBLE_PRECISION

.include <bsd.port.mk>
