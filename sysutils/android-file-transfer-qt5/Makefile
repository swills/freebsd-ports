# $FreeBSD: head/sysutils/android-file-transfer-qt5/Makefile 495988 2019-03-16 23:20:52Z jbeich $

PORTREVISION=	1
PKGNAMESUFFIX=	-qt5

MASTERDIR=	${.CURDIR}/../android-file-transfer

CONFLICTS_INSTALL=	${PORTNAME}-qt4

OPTIONS_SLAVE=	QT5
OPTIONS_EXCLUDE=CLI FUSE

.include "${MASTERDIR}/Makefile"
