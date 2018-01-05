# Created by: David Naylor <dbn@FreeBSD.org>
# $FreeBSD: head/databases/pypy-sqlite3/Makefile 457998 2018-01-03 18:42:15Z dbn $

PORTNAME=	sqlite3
CATEGORIES=	databases python

MAINTAINER=	python@FreeBSD.org
COMMENT=	Standard PyPy binding to the SQLite3 library

LIB_DEPENDS=	libsqlite3.so:databases/sqlite3

CFFI_NAME=	_ffi

.include "${.CURDIR}/../../lang/pypy/bsd.pypy.cffi.mk"
.include <bsd.port.mk>
