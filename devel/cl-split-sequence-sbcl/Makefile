# Created by: Henrik Motakef <henrik.motakef@web.de>
# $FreeBSD: head/devel/cl-split-sequence-sbcl/Makefile 486775 2018-12-06 18:03:48Z krion $

PORTNAME=	split-sequence
PORTVERSION=	20011114.1
PORTREVISION=	30
CATEGORIES=	devel lisp
PKGNAMEPREFIX=	cl-
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Partitioning Common Lisp sequences

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/split-sequence/split-sequence.asd:devel/cl-split-sequence
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/split-sequence/split-sequence.asd:devel/cl-split-sequence

USE_ASDF_FASL=	yes
FASL_TARGET=	sbcl
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>
