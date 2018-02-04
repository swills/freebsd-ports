# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/editors/lazarus-lcl-nogui/Makefile 460666 2018-02-02 05:25:08Z acm $

PKGNAMESUFFIX=	-lcl-nogui

COMMENT=	Lazarus components library - No gui backend

BUILD_DEPENDS=	${LCL_UNITS_DIR}/alllclunits.ppu:editors/lazarus-lcl-units

USE_FPC=	chm fcl-base fcl-db fcl-image fcl-json fcl-registry fcl-xml \
		pasjpeg regexpr rtl-objpas

LCL_INTERFACE=	nogui

MASTERDIR=	${.CURDIR}/../../editors/lazarus

OPT=		#
.include "${MASTERDIR}/Makefile"
