# $FreeBSD: head/multimedia/mlt-qt5/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTREVISION=	0

CONFLICTS_INSTALL=	${PORTNAME}-qt4-*

USES=	qt:5
USE_CXXSTD=	c++11
USE_QT=		core gui svg widgets xml
USE_XORG=	x11
MASTERDIR=	${.CURDIR:H}/mlt
SLAVEPORT=	qt5

.include "${MASTERDIR}/Makefile"
