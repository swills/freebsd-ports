# Created by: Henrik Motakef <henrik.motakef@web.de>
# $FreeBSD: head/www/cl-lml-sbcl/Makefile 469005 2018-05-04 06:17:47Z krion $

PORTNAME=	lml
PORTVERSION=	2.5.7
PORTREVISION=	23
CATEGORIES=	www textproc
PKGNAMEPREFIX=	cl-
DISTFILES=	# none

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Lisp Markup Language

BUILD_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/system-registry/lml.asd:www/cl-lml
RUN_DEPENDS=	${LOCALBASE}/${CL_LIBDIR_REL}/system-registry/lml.asd:www/cl-lml

USE_ASDF_FASL=	yes
FASL_TARGET=	sbcl
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>
