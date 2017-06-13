# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/editors/lazarus-lcl-gtk2/Makefile 435181 2017-03-01 17:50:48Z acm $

PKGNAMESUFFIX=	-lcl-gtk2

COMMENT=	Lazarus components library - GTK2 backend

BUILD_DEPENDS=	${LCL_UNITS_DIR}/alllclunits.ppu:editors/lazarus-lcl-units

USE_FPC=	cairo fcl-base fcl-db fcl-image fcl-res fcl-registry \
		fcl-xml gtk2 pasjpeg x11

LCL_INTERFACE=	gtk2

MASTERDIR=	${.CURDIR}/../../editors/lazarus

OPT=		#
.include "${MASTERDIR}/Makefile"
