# Created by: Henrik Motakef <henrik.motakef@web.de>
# $FreeBSD: head/textproc/cl-meta-sbcl/Makefile 483836 2018-11-02 19:21:19Z krion $

PORTNAME=	meta
PORTVERSION=	0.1
PORTREVISION=	30
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
