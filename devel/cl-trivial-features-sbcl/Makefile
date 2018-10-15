# $FreeBSD: head/devel/cl-trivial-features-sbcl/Makefile 481014 2018-10-01 08:34:25Z krion $

PORTNAME=	trivial-features
PORTVERSION=	2010.01.16
PORTREVISION=	28
CATEGORIES=	devel lisp
PKGNAMEPREFIX=	cl-
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Ensures consistent *FEATURES* in Common Lisp

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/trivial-features/trivial-features.asd:devel/cl-trivial-features
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/trivial-features/trivial-features.asd:devel/cl-trivial-features

USE_ASDF_FASL=	yes
FASL_TARGET=	sbcl
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>
