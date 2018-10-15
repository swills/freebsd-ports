# Created by: Henrik Motakef <henrik.motakef@web.de>
# $FreeBSD: head/textproc/cl-meta-sbcl/Makefile 481014 2018-10-01 08:34:25Z krion $

PORTNAME=	meta
PORTVERSION=	0.1
PORTREVISION=	29
PORTEPOCH=	1
CATEGORIES=	textproc lisp
PKGNAMEPREFIX=	cl-
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Parser generator for Common Lisp

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/meta/meta.asd:textproc/cl-meta
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/meta/meta.asd:textproc/cl-meta

USE_ASDF_FASL=	yes
FASL_TARGET=	sbcl
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>
