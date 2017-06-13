# $FreeBSD: head/lang/pypy/bsd.pypy.mk 440114 2017-05-04 19:08:36Z dbn $

.if !defined(LICENSE)
LICENSE=	MIT PSFL
LICENSE_COMB=	multi
.endif

USES+=		compiler:c11

PYTHON_IMPL?=	${PORTNAME}
PYPY_DIR=	${PYTHON_IMPL}-${PORTVERSION:C|([0-9])\.([0-9]).*|\1.\2|}
PYPY_CFFI_VER?=	pypy-41
PLIST_SUB+=	PYPY_DIR=${PYPY_DIR} PYPY_CFFI_VER=${PYPY_CFFI_VER}
