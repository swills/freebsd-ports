# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/editors/lazarus-lcl-qt/Makefile 463097 2018-02-26 23:10:53Z antoine $

PKGNAMESUFFIX=	-lcl-qt

COMMENT=	Lazarus components library - QT backend

BUILD_DEPENDS=	${LCL_UNITS_DIR}/alllclunits.ppu:editors/lazarus-lcl-units

USE_FPC=	chm fcl-base fcl-db fcl-image fcl-json fcl-registry fcl-res \
		fcl-xml pasjpeg regexpr x11

LCL_INTERFACE=	qt

MASTERDIR=	${.CURDIR}/../../editors/lazarus

.include "${MASTERDIR}/Makefile"
