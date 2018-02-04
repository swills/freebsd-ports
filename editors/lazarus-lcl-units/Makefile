# Created by: Alonso Cardenas Marquez <acm@FreeBSD.org>
# $FreeBSD: head/editors/lazarus-lcl-units/Makefile 460663 2018-02-02 04:02:34Z acm $

PKGNAMESUFFIX=	-lcl-units

COMMENT=	Lazarus components library units

USE_FPC=	chm fcl-base fcl-db fcl-image fcl-json fcl-registry \
		fcl-res fcl-xml iconvenc pasjpeg regexpr

LCL_INTERFACE=	#

MASTERDIR=	${.CURDIR}/../../editors/lazarus

OPT=		"-Fu../../lcl/ -Fu../lcl -Fu../../lcl/forms -Fu../../lcl/nonwin32 -Fu../../lcl/widgetset -Fi../../lcl/include"

.include "${MASTERDIR}/Makefile"
