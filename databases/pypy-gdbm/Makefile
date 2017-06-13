# Created by: David Naylor <dbn@FreeBSD.org>
# $FreeBSD: head/databases/pypy-gdbm/Makefile 418864 2016-07-21 06:02:04Z dbn $

PORTNAME=	gdbm
PORTVERSION=	${PYTHON_PORTVERSION}
CATEGORIES=	databases python

MAINTAINER=	python@FreeBSD.org
COMMENT=	PyPy bindings to the GNU dbm library

LICENSE=	GPLv2+

LIB_DEPENDS=	libgdbm.so:databases/gdbm

CFFI_NAME=	ffi

.include "${.CURDIR}/../../lang/pypy/bsd.pypy.cffi.mk"
.include <bsd.port.mk>
