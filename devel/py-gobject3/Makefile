# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/devel/py-gobject3/Makefile 455210 2017-11-30 15:50:30Z mat $

PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=	3

COMMENT=	Python 2 bindings for GObject

SLAVE_PORT=	python

MASTERDIR=	${.CURDIR}/../../devel/pygobject3-common
PLIST=		${.CURDIR}/pkg-plist
py34_PLIST=	${.CURDIR}/pkg-plist-py3
py35_PLIST=	${.CURDIR}/pkg-plist-py3
py36_PLIST=	${.CURDIR}/pkg-plist-py3

.include "${MASTERDIR}/Makefile"
