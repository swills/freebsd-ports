# $FreeBSD: head/sysutils/android-file-transfer-qt5/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTREVISION=	1
PKGNAMESUFFIX=	-qt5

MASTERDIR=	${.CURDIR}/../android-file-transfer

CONFLICTS_INSTALL=	${PORTNAME}-qt4

OPTIONS_SLAVE=	QT5
OPTIONS_EXCLUDE=${OPTIONS_MULTI_COMP}

.include "${MASTERDIR}/Makefile"
