# $FreeBSD: head/emulators/ppsspp-qt5/Makefile 483177 2018-10-27 22:44:33Z jbeich $

PORTREVISION=	0
PKGNAMESUFFIX=	-qt5

MASTERDIR=	${.CURDIR}/../ppsspp

OPTIONS_SLAVE=	QT5
# XXX https://github.com/hrydgard/ppsspp/blob/v1.6.3/Qt/QtMain.cpp#L533-L534
OPTIONS_EXCLUDE=VULKAN

.include "${MASTERDIR}/Makefile"
