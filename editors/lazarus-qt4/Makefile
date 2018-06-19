# $FreeBSD: head/editors/lazarus-qt4/Makefile 470846 2018-05-25 16:00:11Z acm $

PKGNAMESUFFIX?=  -qt4

COMMENT=	Portable Delphi-like IDE for the FreePascal compiler (QT4)

CONFLICTS=	${PORTNAME}-gtk2-* ${PORTNAME}-qt5-*

LIB_DEPENDS=	libQt4Pas.so:x11-toolkits/qt4pas

LCL_PLATFORM=	qt

MASTERDIR=	${.CURDIR}/../../editors/lazarus

.include "${MASTERDIR}/Makefile"
