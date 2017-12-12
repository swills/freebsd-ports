# Created by: Anonymous
# $FreeBSD: head/x11/cl-clx-sbcl/Makefile 456036 2017-12-11 14:29:48Z krion $

PORTNAME=	clx
DISTVERSION=	0.7.4
PORTREVISION=	3
CATEGORIES=	x11 lisp
PKGNAMEPREFIX=	cl-
PKGNAMESUFFIX=	-sbcl
DISTFILES=	# none

MAINTAINER=	jrm@FreeBSD.org
COMMENT=	X11 client library for Common Lisp

LICENSE=	MIT

BUILD_DEPENDS=	${PKGNAMEPREFIX}${PORTNAME}>=0:x11/${PKGNAMEPREFIX}${PORTNAME}
RUN_DEPENDS=	${PKGNAMEPREFIX}${PORTNAME}>=0:x11/${PKGNAMEPREFIX}${PORTNAME}

USE_ASDF_FASL=	yes
FASL_TARGET=	sbcl
FASL_BUILD=	yes

.include "${.CURDIR}/../../devel/cl-asdf/bsd.cl-asdf.mk"
.include <bsd.port.mk>
