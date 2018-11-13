# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: head/audio/py-xmms2/Makefile 484599 2018-11-10 10:09:48Z mat $

PORTREVISION=	6

CATEGORIES=	audio python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Python Bindings for XMMS2

BUILD_DEPENDS=	${PYTHON_PKGNAMEPREFIX}pyrex>0:devel/pyrex@${PY_FLAVOR}
LIB_DEPENDS+=	libxmmsclient.so:audio/xmms2

MASTERDIR=	${.CURDIR}/../xmms2

USES=		python:2.7 ssl
USE_PYTHON=	flavors

BROKEN_SSL=	openssl111

PLIST=		${.CURDIR}/pkg-plist

XMMS2_SLAVE=	python

.include "${MASTERDIR}/Makefile"
