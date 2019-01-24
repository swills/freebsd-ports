# $FreeBSD: head/multimedia/mlt-qt5/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTREVISION=	1

CONFLICTS_INSTALL=	${PORTNAME}-qt4-*

USES=	qt:5
USE_CXXSTD=	c++11
USE_QT=		core gui svg widgets xml
USE_XORG=	x11
MASTERDIR=	${.CURDIR:H}/mlt
SLAVEPORT=	qt5

.include "${MASTERDIR}/Makefile"
