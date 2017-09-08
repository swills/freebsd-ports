# Created by: Anonymous
# $FreeBSD: head/x11/cl-clx-sbcl/Makefile 449398 2017-09-07 14:08:27Z jrm $

PORTNAME=	clx
DISTVERSION=	0.7.4
PORTREVISION=	1
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
