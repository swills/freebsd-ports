# Created by: Anonymous
# $FreeBSD: head/x11/cl-clx-sbcl/Makefile 448232 2017-08-18 13:50:49Z jrm $

PORTNAME=	clx
PORTVERSION=	0.7.4
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
