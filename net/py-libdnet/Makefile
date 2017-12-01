# Created by: thierry@pompo.net
# $FreeBSD: head/net/py-libdnet/Makefile 455210 2017-11-30 15:50:30Z mat $

CATEGORIES=	net python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

COMMENT=	Python module for libdnet

LIB_DEPENDS=	libdnet.so:net/libdnet

MASTERDIR=	${.CURDIR}/../libdnet
INSTALL_WRKSRC=	${WRKSRC}/python
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${NONEXISTENT}
PLIST_FILES=	%%PYTHON_SITELIBDIR%%/dnet.so \
		%%PYTHON_SITELIBDIR%%/dnet-${PORTVERSION}-py${PYTHON_VER}.egg-info

LIBDNET_SLAVE=	yes

USES=		python:2.7
USE_PYTHON=	flavors
CONFIGURE_ARGS=	--with-python=${PYTHON_CMD}

.if defined(MAINTAINER_MODE)
regression-test: install
	${PYTHON_CMD} ${INSTALL_WRKSRC}/test.py
.endif

.include "${MASTERDIR}/Makefile"
