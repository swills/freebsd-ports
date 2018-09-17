# $FreeBSD: head/emulators/ppsspp-qt5/Makefile 479260 2018-09-08 23:14:07Z jbeich $

PORTREVISION=	1
PKGNAMESUFFIX=	-qt5

MASTERDIR=	${.CURDIR}/../ppsspp

OPTIONS_SLAVE=	QT5
# XXX https://github.com/hrydgard/ppsspp/blob/v1.6.3/Qt/QtMain.cpp#L533-L534
OPTIONS_EXCLUDE=VULKAN

.include "${MASTERDIR}/Makefile"
