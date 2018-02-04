# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/editors/lazarus-lcl-qt5/Makefile 460559 2018-02-01 07:17:13Z acm $

PKGNAMESUFFIX=	-lcl-qt5

COMMENT=	Lazarus components library - QT5 backend

BUILD_DEPENDS=	${LCL_UNITS_DIR}/alllclunits.ppu:editors/lazarus-lcl-units

USE_FPC=	fcl-base fcl-db fcl-image fcl-registry fcl-res \
		fcl-xml pasjpeg x11

LCL_INTERFACE=	qt5

MASTERDIR=	${.CURDIR}/../../editors/lazarus

.include "${MASTERDIR}/Makefile"
