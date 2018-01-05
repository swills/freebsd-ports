# $FreeBSD: head/multimedia/mlt-qt5/Makefile 458021 2018-01-04 11:11:17Z tcberner $

PORTREVISION=	2

CONFLICTS_INSTALL=	${PORTNAME}-qt4-*

USE_CXXSTD=	c++11
USE_QT5=	core gui svg widgets xml
MASTERDIR=	${.CURDIR:H}/mlt
SLAVEPORT=	qt5

.include "${MASTERDIR}/Makefile"
