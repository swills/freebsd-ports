# $FreeBSD: head/editors/lazarus-qt5/Makefile 494879 2019-03-07 04:55:52Z acm $

PKGNAMESUFFIX?=  -qt5

COMMENT=	Portable Delphi-like IDE for the FreePascal compiler (QT5)

CONFLICTS=	${PORTNAME}-gtk2-* ${PORTNAME}-qt4-*

LIB_DEPENDS=	libQt5Pas.so:x11-toolkits/qt5pas

LCL_PLATFORM=	qt5

MASTERDIR=	${.CURDIR}/../../editors/lazarus

.include "${MASTERDIR}/Makefile"
