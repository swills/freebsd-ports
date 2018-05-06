# Created by: Henrik Motakef <henrik.motakef@web.de>
# $FreeBSD: head/textproc/cl-ppcre-sbcl/Makefile 469005 2018-05-04 06:17:47Z krion $

PORTNAME=	cl-ppcre
PORTVERSION=	2.0.3
PORTREVISION=	21
CATEGORIES=	textproc lisp
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Portable Perl-Compatible Regular Expression for Common Lisp

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/cl-ppcre/cl-ppcre.asd:textproc/cl-ppcre
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/cl-ppcre/cl-ppcre.asd:textproc/cl-ppcre

USE_ASDF_FASL=	yes
FASL_TARGET=	sbcl
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>
