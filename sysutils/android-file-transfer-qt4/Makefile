# $FreeBSD: head/sysutils/android-file-transfer-qt4/Makefile 423675 2016-10-10 16:22:04Z jbeich $

PORTREVISION=	0
PKGNAMESUFFIX=	-qt4

MASTERDIR=	${.CURDIR}/../android-file-transfer

CONFLICTS_INSTALL=	${PORTNAME}-qt5

OPTIONS_SLAVE=	QT4
OPTIONS_EXCLUDE=${OPTIONS_MULTI_COMP}

.include "${MASTERDIR}/Makefile"
