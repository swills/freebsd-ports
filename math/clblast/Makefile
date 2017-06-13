# Created by: Johannes M Dieterich <jmd@FreeBSD.org>
# $FreeBSD: head/math/clblast/Makefile 442907 2017-06-08 06:50:00Z mat $

PORTNAME=	clblast
PORTVERSION=	0.11.0
CATEGORIES=	math

MAINTAINER=	jmd@FreeBSD.org
COMMENT=	Modern, lightweight, performant and tunable OpenCL BLAS library

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE

BUILD_DEPENDS=	opencl>=0:devel/opencl
LIB_DEPENDS=	libOpenCL.so:devel/ocl-icd
RUN_DEPENDS=	opencl>=0:devel/opencl

USE_GITHUB=	yes
GH_ACCOUNT=	CNugteren
GH_PROJECT=	CLBlast

USE_LDCONFIG=	yes
USES=		cmake

.include <bsd.port.mk>
