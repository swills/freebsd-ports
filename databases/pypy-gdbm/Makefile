# Created by: David Naylor <dbn@FreeBSD.org>
# $FreeBSD: head/databases/pypy-gdbm/Makefile 484696 2018-11-11 15:38:50Z danfe $

PORTNAME=	gdbm
PORTREVISION=	1
CATEGORIES=	databases python

MAINTAINER=	python@FreeBSD.org
COMMENT=	PyPy bindings to the GNU dbm library

LICENSE=	GPLv2+

LIB_DEPENDS=	libgdbm.so:databases/gdbm

CFFI_NAME=	ffi

.include "${.CURDIR}/../../lang/pypy/bsd.pypy.cffi.mk"
.include <bsd.port.mk>
