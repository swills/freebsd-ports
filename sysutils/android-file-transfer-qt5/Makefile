# $FreeBSD: head/sysutils/android-file-transfer-qt5/Makefile 423675 2016-10-10 16:22:04Z jbeich $

PORTREVISION=	0
PKGNAMESUFFIX=	-qt5

MASTERDIR=	${.CURDIR}/../android-file-transfer

CONFLICTS_INSTALL=	${PORTNAME}-qt4

OPTIONS_SLAVE=	QT5
OPTIONS_EXCLUDE=${OPTIONS_MULTI_COMP}

.include "${MASTERDIR}/Makefile"
