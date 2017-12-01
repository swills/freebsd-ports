# Created by: Joe Marcus Clarke <marcus@FreeBSD.org>
# $FreeBSD: head/devel/py-dbus/Makefile 455210 2017-11-30 15:50:30Z mat $

PORTREVISION=	1

PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
PKGNAMESUFFIX=

COMMENT=	Python2 bindings for the D-BUS messaging system

SLAVE_PORT=	python2

MASTERDIR=	${.CURDIR}/../../devel/pydbus-common
.if ${FLAVOR:U:Mpy3*}
PLIST=		${.CURDIR}/pkg-plist-py3
.else
PLIST=		${.CURDIR}/pkg-plist
.endif

.include "${MASTERDIR}/Makefile"
