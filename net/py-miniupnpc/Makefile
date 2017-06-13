# $FreeBSD: head/net/py-miniupnpc/Makefile 412348 2016-04-01 14:16:16Z mat $

CATEGORIES=	net python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

COMMENT=	Python module for miniupnpc

BUILD_DEPENDS=	${NONEXISTENT}:net/miniupnpc:build

MASTERDIR=	${.CURDIR}/../miniupnpc

USES=		python
USE_PYTHON=	autoplist distutils

WRKDIR=		${WRKDIRPREFIX}${MASTERDIR}/work
PLIST=		${.CURDIR}/pkg-plist

post-patch:
	${REINPLACE_CMD} 's/\(version\)="[^"]*"/\1="${PORTVERSION}"/' \
		${WRKSRC}/setup.py

post-install:
	${STRIP_CMD} ${STAGEDIR}${PYTHONPREFIX_SITELIBDIR}/miniupnpc.so

.include "${MASTERDIR}/Makefile"
