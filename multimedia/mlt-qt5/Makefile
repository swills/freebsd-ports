# $FreeBSD: head/multimedia/mlt-qt5/Makefile 439367 2017-04-25 08:20:30Z riggs $

PORTREVISION=	1

CONFLICTS_INSTALL=	${PORTNAME}-qt4-*

USE_CXXSTD=	c++11
USE_QT5=	core gui svg widgets xml
MASTERDIR=	${.CURDIR:H}/mlt
SLAVEPORT=	qt5

.include "${MASTERDIR}/Makefile"
