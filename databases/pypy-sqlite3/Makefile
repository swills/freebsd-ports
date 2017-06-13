# Created by: David Naylor <dbn@FreeBSD.org>
# $FreeBSD: head/databases/pypy-sqlite3/Makefile 412346 2016-04-01 14:00:51Z mat $

PORTNAME=	sqlite3
PORTVERSION=	${PYTHON_PORTVERSION}
CATEGORIES=	databases python

MAINTAINER=	python@FreeBSD.org
COMMENT=	Standard PyPy binding to the SQLite3 library

LIB_DEPENDS=	libsqlite3.so:databases/sqlite3

CFFI_NAME=	_ffi

.include "${.CURDIR}/../../lang/pypy/bsd.pypy.cffi.mk"
.include <bsd.port.mk>
