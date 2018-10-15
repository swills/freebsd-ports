# $FreeBSD: head/security/cl-md5-sbcl/Makefile 481014 2018-10-01 08:34:25Z krion $

PORTNAME=	md5
PORTVERSION=	1.8.5
PORTREVISION=	28
CATEGORIES=	security lisp
PKGNAMEPREFIX=	cl-
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Native MD5 implementation in Common Lisp

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/md5/md5.asd:security/cl-md5
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/md5/md5.asd:security/cl-md5

USE_ASDF_FASL=	yes
FASL_TARGET=	sbcl
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>
