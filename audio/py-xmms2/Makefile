# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: head/audio/py-xmms2/Makefile 412344 2016-04-01 13:29:15Z mat $

PORTREVISION=	5

CATEGORIES=	audio python
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	Python Bindings for XMMS2

BUILD_DEPENDS=	${PYTHON_SITELIBDIR}/Pyrex/__init__.py:devel/pyrex
LIB_DEPENDS+=	libxmmsclient.so:audio/xmms2

MASTERDIR=	${.CURDIR}/../xmms2

USES=		python

PLIST=		${.CURDIR}/pkg-plist

XMMS2_SLAVE=	python

.include "${MASTERDIR}/Makefile"
