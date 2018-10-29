# $FreeBSD: head/editors/lazarus-qt5/Makefile 483377 2018-10-29 09:00:46Z ak $

PKGNAMESUFFIX?=  -qt5

COMMENT=	Portable Delphi-like IDE for the FreePascal compiler (QT5)

CONFLICTS=	${PORTNAME}-gtk2-* ${PORTNAME}-qt4-*

LIB_DEPENDS=	libQt5Pas.so:x11-toolkits/qt5pas

LCL_PLATFORM=	qt5

MASTERDIR=	${.CURDIR}/../../editors/lazarus

.include "${MASTERDIR}/Makefile"
