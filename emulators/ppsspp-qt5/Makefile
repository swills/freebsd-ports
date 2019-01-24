# $FreeBSD: head/emulators/ppsspp-qt5/Makefile 490472 2019-01-16 11:13:44Z tijl $

PORTREVISION=	1
PKGNAMESUFFIX=	-qt5

MASTERDIR=	${.CURDIR}/../ppsspp

OPTIONS_SLAVE=	QT5
# XXX https://github.com/hrydgard/ppsspp/blob/v1.6.3/Qt/QtMain.cpp#L533-L534
OPTIONS_EXCLUDE=VULKAN

.include "${MASTERDIR}/Makefile"
