# $FreeBSD: head/net/py-miniupnpc/Makefile 458238 2018-01-06 10:02:43Z mat $

CATEGORIES=	net python
PORTREVISION=	1
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

COMMENT=	Python module for miniupnpc

LIB_DEPENDS=	libminiupnpc.so:net/miniupnpc

MASTERDIR=	${.CURDIR}/../miniupnpc

USES=		python
USE_PYTHON=	autoplist distutils

PLIST=		${.CURDIR}/pkg-plist

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/miniupnpc.so

.include "${MASTERDIR}/Makefile"
