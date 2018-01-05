# Created by: David Naylor <dbn@FreeBSD.org>
# $FreeBSD: head/databases/pypy-gdbm/Makefile 457998 2018-01-03 18:42:15Z dbn $

PORTNAME=	gdbm
CATEGORIES=	databases python

MAINTAINER=	python@FreeBSD.org
COMMENT=	PyPy bindings to the GNU dbm library

LICENSE=	GPLv2+

LIB_DEPENDS=	libgdbm.so:databases/gdbm

CFFI_NAME=	ffi

.include "${.CURDIR}/../../lang/pypy/bsd.pypy.cffi.mk"
.include <bsd.port.mk>
