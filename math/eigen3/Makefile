# $FreeBSD: head/math/eigen3/Makefile 423320 2016-10-05 06:18:09Z tcberner $

PORTNAME=	eigen
PORTVERSION=	3.2.10
CATEGORIES=	math
MASTER_SITES=	https://bitbucket.org/${PORTNAME}/${PORTNAME}/get/
DISTNAME=	${PORTVERSION}
DIST_SUBDIR=	${PORTNAME}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Lightweight library for vector and matrix math

LICENSE=	LGPL21 MPL
LICENSE_COMB=	multi

CMAKE_ARGS=	-DPKGCONFIG_INSTALL_DIR:PATH="${PREFIX}/libdata/pkgconfig"
USES=		cmake:outsource tar:bzip2
NO_BUILD=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTNAME}-b9cd8366d4e8

.include <bsd.port.mk>
